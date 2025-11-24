#include <stdio.h>

int main() {
    int accNo[100];           // account numbers
    char name[100][50];       // account holder names
    float balance[100];       // account balances
    int count = 0;            // number of accounts

    int choice, i, acc, found;
    float amount;

    while (1) {
        printf("\n------- BANKING SYSTEM -------\n");
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Check Balance\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            // CREATE ACCOUNT
            case 1:
                printf("\nEnter Account Number: ");
                scanf("%d", &accNo[count]);

                printf("Enter Name: ");
                scanf("%s", name[count]);

                balance[count] = 0;   // initial balance
                count++;

                printf("Account Created Successfully!\n");
                break;

            // DISPLAY ACCOUNTS
            case 2:
                if (count == 0)
                    printf("\nNo accounts available!\n");
                else {
                    printf("\n---- ACCOUNT DETAILS ----\n");
                    for (i = 0; i < count; i++) {
                        printf("Account No: %d\n", accNo[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Balance: %.2f\n\n", balance[i]);
                    }
                }
                break;

            // DEPOSIT MONEY
            case 3:
                printf("\nEnter Account Number: ");
                scanf("%d", &acc);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (accNo[i] == acc) {
                        printf("Enter amount to deposit: ");
                        scanf("%f", &amount);
                        balance[i] += amount;
                        printf("Amount Deposited Successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found!\n");
                break;

            // WITHDRAW MONEY
            case 4:
                printf("\nEnter Account Number: ");
                scanf("%d", &acc);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (accNo[i] == acc) {
                        printf("Enter amount to withdraw: ");
                        scanf("%f", &amount);

                        if (balance[i] >= amount) {
                            balance[i] -= amount;
                            printf("Withdrawal Successful!\n");
                        } else {
                            printf("Insufficient Balance!\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found!\n");
                break;

            // CHECK BALANCE
            case 5:
                printf("\nEnter Account Number: ");
                scanf("%d", &acc);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (accNo[i] == acc) {
                        printf("Current Balance = %.2f\n", balance[i]);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found!\n");
                break;

            case 6:
                printf("\nThank you for using Banking System!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}