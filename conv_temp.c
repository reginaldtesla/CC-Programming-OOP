#include<stdio.h>
#include<stdlib.h>
int main(){
int celcius;
float fahrenheit, kelvin;
printf("Enter temperature in degree celcius:\t");
scanf("%d",&celcius);
fahrenheit = celcius*(9/5)+32;
kelvin = celcius + 273;
printf(" Temperature in fahrenheit is %.3f and in kelvin is %.3f",fahrenheit,kelvin);
return EXIT_SUCCESS;
}
