
#include <stdio.h>
int main()
{
    float balance, amount;
    int choice;
    printf("Enter current account balance: ");
    scanf("%f", &balance);
    printf("\nATM Menu\n");
    printf("1. Balance Inquiry\n 2. Cash Withdrawal\n3. Cash Deposit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("Current balance: %.2f\n", balance);
            break;
        case 2:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= balance)
            {
                balance = balance - amount;
                printf("Transaction successful\n");
                printf("Remaining balance: %.2f\n", balance);
            }
            else
            {
                printf("Insufficient balance\n");
            }
            break;
        case 3:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            if (amount > 0)
            {
                balance = balance + amount;
                printf("Deposit successful\n");
                printf("Updated balance: %.2f\n", balance);
            }
            else
            {
                printf("Invalid deposit amount\n");
            }
            break;
        default:
            printf("Invalid option\n");
    }
    return 0;
}