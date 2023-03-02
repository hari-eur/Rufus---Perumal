Hi All,

We have listed down some excercises to evaluate our skills in C/Linux development. (You may combine the following excercises)

Operators:
1) Demo "Ternary/Unary" and "Bitwise" operators
2) Try to enable/disable a specific "BIT" in a integer variable.

File Handling:
1) Write a code to insert a line in middle of file
2) Create three threads to write to same file
3) Write a code to print the file size and Copy the file
4) Write a code to read/write the files using open()/close() instead of fopen()/fclose()

Pointers:
1) Show a demo for "Constant Pointer" vs "Pointer Constant"
2) Show a demo for "Call by Reference" vs "Call by Value"
3) Show a demo for "void *" de-referencing for int/char*
4) Show a demo for "function pointer" and call different functions using same function pointer.

Strings:
1) Store an array of strings in both ARRAY and POINTERS
2) Parse a comma separate string and print all values (i.e number of comma separated fields is dynamic)

Algorithms:
1) Write a code to demo "Singly/Doubly Linked List"
2) Write a code to demo "FIFO/LIFO"
3) Wrie a code to demo "Sorting" for integer & strings

IPC:
1) Write a code for client & server communication using sockets 
  (i.e Server will send variable length of string and Client should able to read & print variable length strings)
  (i.e Please embed the variable length string inside a struct and send it over Socket)
  (i.e Should handle error number for all Socket APIs and print "errno" also in caes of failures)
2) Write a code to demo "netlink" IPC
3) Write a code to demo "Pipes" IPC
4) Write a code to demo "MsgQueue" IPC

GRPC:
1) Write a code to demo GRPC communication

Docker:
1) Should be able to demo "How to compile & run a C program in Containers"?

Thread/Process:
1) Demo a multhreaded application with mutex/semaphore
2) Show a demo on "How to share variable/data b/w multiple process"?

Signal:
1) How to handle signals in C

Struct/Union:
1) Show a demo for using Struct/Union

Heap Memory:
1) Show a demo of malloc/calloc/realloc functions

Compilation:
1) Write a Makefile to compile atleast three .c file and two .h files (i.e Keep .c files in "src" folder and .h files in "include" folder)
2) Write a Makefile to generate a sample dynamic(.so) and static(.a) libraries and link them with sample application
3) Should be able to compile your program with some external open source pkgs (i.e openssl, grpc, kafka, etc)

Database:
1) Try to demo SQL queries
2) Try to compile a C program with "sqlite3" library and show a demo for how to use "sqlite3 database"?


Kernel Programming:
1) Show a demo of how to compile a sample kernel module and run it.
2) Read about how user-space to kernel-space communication happens?
