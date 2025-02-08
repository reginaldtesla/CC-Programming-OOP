#include <stdio.h>
#include <stdlib.h>

#define sell_point 54.2
#define buy_point 28.5

double askSockValue(void);
void makeDecision(double value);
void handleTransaction(char action);

int main()
{
    double value = askStock();
    makeDecision(value);
    return EXIT_SUCCESS;
}
double askStockValue(void)
{
    printf("What is the current stock value?");
    double value;
    scanf("%lf",&value);
    return value;
}
void makeDecision(double value)
{
    if (value <= buy_point)
        handleTransaction('b');
    else if(value >= sell_point)
        handleTransaction('s');
    else
        handleTransaction('h');
}
void handleTransaction(char action)
{
    switch(action)
    {
    case 'b':
        printf("buy more of the stock\n");
        break;
    case 's':
        printf("sell more of stock\n");
        break;
    case 'h':
        printf("hold for now\n");
        break;
    default:
        printf("sorry, i can't provide any advice at this time\n");
    }
}
