
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

int main() 
{
    sqlite3 *db;
    char *err_msg=0;

    // Open database connection
    int rc=sqlite3_open("test.db", &db);
    if (rc!=SQLITE_OK)
    {
        fprintf(stderr, "Cannot open database: %s\n",sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }

    // Create table
    char *sql="CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY, name TEXT, age INT)";
    rc=sqlite3_exec(db,sql,0,0,&err_msg);
    if(rc!=SQLITE_OK) 
    {
        fprintf(stderr,"SQL error: %s\n",err_msg);
        sqlite3_free(err_msg);
        sqlite3_close(db);
        return 1;
    }

    // Insert data
    sql = "INSERT INTO users (name, age) VALUES ('Alice', 25), ('Bob', 30), ('Charlie', 35)";
    rc=sqlite3_exec(db,sql,0,0,&err_msg);
    if(rc!=SQLITE_OK) 
    {
        fprintf(stderr, "SQL error: %s\n",err_msg);
        sqlite3_free(err_msg);
        sqlite3_close(db);
        return 1;
    }

    // Select data
    sql="SELECT * FROM users";
    sqlite3_stmt *stmt;
    rc=sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if(rc!=SQLITE_OK)
    {
        fprintf(stderr, "SQL error: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }
    while (sqlite3_step(stmt)==SQLITE_ROW) 
    {
        int id=sqlite3_column_int(stmt, 0);
        const char *name=sqlite3_column_text(stmt, 1);
        int age=sqlite3_column_int(stmt, 2);
        printf("id = %d, name = %s, age = %d\n", id, name, age);
    }

    // Cleanup
    sqlite3_finalize(stmt);
    sqlite3_close(db);

    return 0;
}
