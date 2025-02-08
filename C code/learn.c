
//   "name": "c-programming",
//   "version": "1.0.0",
//   "description": "test",
//   "main": "learn.c",
//   "scripts": {
//     "test": "echo \"Error: no test specified\" && exit 1"
//   },
//   "author": "tesla",
//   "license": "ISC"
#include <stdio.h>
#include "stdlib.h"
int main(void)
{
    int num;
    printf("please enter a number\n");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("%d is a negative number", num);
    }
    if (num % 2 == 0)
    {
        printf("%d is even", num);
    }
    else if (num % 2 != 0)
    {
        printf("%d is not divisible by 2", num);
    }
    else if (num > 0)
    {
        printf("%d is a positive number", num);
    }
    else
    {
        printf("%d is zero", num);
    }
    while (num != 10)
    {
        num++;

        if ((num % 3 == 0) && (num % 5 == 0))
        {
            printf("    fizzbuzz    ");
        }
        else if (num % 3 == 0)
        {
            printf("    fizz    ");
        }
        else if (num % 5 == 0)
        {
            printf("    buzz    ");
        }
        else
        {
            printf("    %d      ", num);
        }
        switch (num)
        {
        case 1:
            printf("god");
            break;
        case 2:
            printf("bad");
            break;
        case 3:
            printf("normal");
            break;
        case 4:
            printf("okay");
            break;
        case 5:
            printf("sex");
            break;
        case 6:
            printf("69 position");
            break;

        default:
            printf("dont know");
            break;
        }
        }
    return EXIT_SUCCESS;
}