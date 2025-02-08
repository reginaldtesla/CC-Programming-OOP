#include <stdio.h>
#include <stdlib.h>
#define sell_point 54.2
#define buy_point 60.4

void askStock(void);
void sell();
void buy();
void hold();
void decision();

float price;

void askStock(void)
{
    printf("Enter current price of stock:\t");
    scanf("%f",&price);
    printf("U entered %f .",price);
}
void sell()
{
    printf("U have to sell the stock");
}
void buy()
{
    printf("U have to buy the stock");
}
void hold()
{
    printf("U have to hold the stock for now.");
}
void decision(float price)
{
    switch(price)
    {
    case price > sell_point:
        buy();
        break;
    case price < buy_point:
        sell();
        break;
    case price > sell_point && price < buy_point:
        hold();
        break;
    default:
        printf("Please enter something to work with.!");
    }
}
int main()
{
    askStock();
    decision();

}
