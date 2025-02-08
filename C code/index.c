
//   "name": "c-programming",
//   "version": "1.0.0",
//   "description": "test",
//   "main": "index.c",
//   "scripts": {
//     "test": "echo \"Error: no test specified\" && exit 1"
//   },
//   "author": "tesla",
//   "license": "ISC"

#include <stdio.h>
#include "stdlib.h"
#include <cstdio>
int main(void)
{
    char name[20], address[30];
    char c;
    printf("How do u feel on a scale of 1-5? ");
    c = getchar();
    printf("What is your name? ");
    scanf("%s", &name);
    printf("where do you stay? ");
    scanf("%s", &address);
    printf("Entered name was: %s\n", name);
    printf("Entered address was: %s\n", address);
    printf("You feel: ");
    putchar(c);
    wchar_t x = "Tesla";
    printf("this is %lc", x);
    return EXIT_SUCCESS;
}