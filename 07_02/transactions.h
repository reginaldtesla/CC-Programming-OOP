#include <stdio.h>
#include <stdlib.h>
#ifndef transactions_h
#define transactions_h
float accountBalance,amount;
void initializeAccount();
void getBalance(void);
void askCustomer(void);
void updateAccount(float value);
void addGift(float giftAmount);
void thankYou(void);
#endif // _07_02_h