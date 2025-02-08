#include <stdio.h>
#include <stdlib.h>
int main()
{
    float cm,feet,inchies;
    printf("Enter in centimeters :\t");
    scanf("%f",&cm);
    feet = 0.0328084*cm;
    inchies = 0.393701*cm;
    printf("This is the value in feet :\t%.2f feet\n",feet);
    printf("This is the value in inchies :\t%f inchies\n",inchies);
    return 0;
}
