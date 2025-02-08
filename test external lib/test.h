#include<stdio.h>
#include<stdlib.h>
#ifndef test_h
#define test_h
float accountBalance, amount;
void initializeAccount();
void getBalance(void);
void askCustomer(void);
void updateAccount(float value);
void addGift(float giftAmount);
void thankYou(void);
#endif