#include <stdio.h>

int main()
{
    int choice, bank_choice;
    float balance, interest_rate;
    char bank_name[50], account_type[20];
while(1)
  {
    printf("\n---------------------------------\n");
    printf("\nWelcome to Bank Management System\n");
    printf("\n---------------------------------\n");
    printf("\n1. View list of banks\n");
    printf("2. View banking operation and account details\n");
    printf("3. View benefits of a specific account\n");
    printf("4. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("\nList of banks:\n");
            printf("1. State Bank of India\n");
            printf("2. ICICI Bank\n");
            printf("3. HDFC Bank\n");
            printf("4. Axis Bank\n");
            break;

        case 2:
            // Banking operation & account details
            printf("\nEnter bank name: ");
            scanf("%s",bank_name);
           
            printf("\nBanking operation and account details for %s:\n",bank_name);
            printf("1. Savings account\n");
            printf("2. Current account\n");
            printf("3. Demat account\n");

            printf("\nEnter account type: ");
            scanf("%s",account_type);

            printf("\nAccount details for %s account in %s:\n",account_type,bank_name);

            // Dummy balance and interest rate value
            balance=50000;
            interest_rate=3.5;

            printf("Balance: Rs. %.2f\n",balance);
            printf("Interest rate: %.2f\n",interest_rate);
            break;

        case 3:
            // Benefits of a specific account
            printf("\nEnter bank name: ");
            scanf("%s",bank_name);

            printf("\nEnter account type: ");
            scanf("%s",account_type);

            printf("\nBenefits of %s account in %s:\n",account_type,bank_name);

            // Dummy interest rate value
            interest_rate=3.5;

            if(strcmp(account_type, "savings")==0)
            {
                printf("High interest rate of %.2f%%\n",interest_rate);
                printf("Easy access to funds\n");
            }
            else if(strcmp(account_type,"current")==0)
            {
                printf("No minimum balance requirement\n");
                printf("Unlimited transactions\n");
            }
            else if (strcmp(account_type, "demat")==0)
            {
                printf("Easy buying and selling of stocks\n");
                printf("Online portfolio tracking\n");
            }
            else
            {
                printf("Invalid account type\n");
            }
            break;

        case 4:
            // Exit
            printf("\nThank you for using Bank Management System\n");
            return 0;

        default:
            printf("\nInvalid choice\n");
    }
  }
    return 0;
}
