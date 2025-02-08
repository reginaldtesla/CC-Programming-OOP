#include <stdio.h>
#include <stdlib.h>
void updateAccount(float amount)
{
    accountBalance += amount;
    printf("The account was updated with $%.2f\n",amount);
}
void getBalance(void)
{
    printf("\nThe current balance in the account is $%.2f\n", accountBalance);
}
void thankYou(void)
{
    printf("------  Thank you!  ------");
}
void addGift(float giftAmount)
{
    accountBalance += giftAmount;
    printf("Congratulations! A gift of $%.2f has been added to your account\n",giftAmount);
}
void askCustomer(void)
{
    printf("Next transaction please...\n");
    printf("Enter amount to credit (positive) or debit (negative):");
    scanf("%f",&amount);
}
void initializeAccount(void)
{
    accountBalance = 0.0;
}

