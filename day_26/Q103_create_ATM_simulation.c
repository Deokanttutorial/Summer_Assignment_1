#include <stdio.h>

int main() {
    int pin, enteredPin, choice;
    float balance = 1000.0; 
    float amount;

    pin = 1234; 

    printf("Welcome to the ATM Simulation!\n");
    printf("Please enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) 
    {
        printf("❌ Incorrect PIN. Access denied.\n");
        return 0;
    }

    do 
    {
        printf("\n===== ATM Menu =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Your current balance is: ₹%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ₹");
                scanf("%f", &amount);
                balance += amount;
                printf("✅ ₹%.2f deposited successfully.\n", amount);
                break;
            case 3:
                printf("Enter amount to withdraw: ₹");
                scanf("%f", &amount);
                if (amount > balance) 
                {
                    printf("❌ Insufficient balance.\n");
                } 
                else 
                {
                    balance -= amount;
                    printf("✅ ₹%.2f withdrawn successfully.\n", amount);
                }
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
