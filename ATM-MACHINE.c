#include<stdio.h>

float Balance = 1000.00;

void CheckBalance();

void DepositeMoney() {
    float amount;
    printf("Enter amount to deposite:\n");
    scanf("%f",&amount);
    if(amount <= 0) {
        printf("Invalid amount.\n");
    } else {
        printf("₹%.2f Deposited successfully!\n",amount);
        Balance += amount;
        CheckBalance();
    }
} 

void WithdrawMoney() {
    float amount;
    printf("Enter amount to withdraw:\n");
    scanf("%f",&amount);
    if(amount > Balance) {
        printf("Insufficient Balance.\n");
    }
    else if(amount <=0 ) {
        printf("Invalid amount.\n");
    }
    else {
        printf("₹%.2f Withdrawn successfully!\n",amount);
        Balance -= amount;
        CheckBalance();
    }
}

void CheckBalance() { 
    printf("Your current Balance is ₹%.2f\n",Balance);
}

int main() {
    int choice;
    do {
        printf("💳ATM MENU\n");
        printf("1.💰Deposite Money\n");
        printf("2.💸Withdraw Money\n");
        printf("3.🧾CheckBalance\n");
        printf("4.🚪Exit\n");
        printf("Enter your choice(1-4):\n");
        scanf("%d",&choice);

        switch(choice) {
            case 1:DepositeMoney();break;
            case 2:WithdrawMoney();break;
            case 3:CheckBalance();break;
            case 4:printf("Thankyou for using the ATM.\n");break;
            default:printf("Invalid choice! please try again\n");
}  } while(choice != 4);

return 0;
}


