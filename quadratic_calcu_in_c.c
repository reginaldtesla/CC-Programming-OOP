#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    //ax+bx+c=0
    puts("------ax+bx+cx=0------");
    float a,b,c;
    printf("Enter a:\t");
    scanf("%f",&a);
    printf("Enter b:\t");
    scanf("%f",&b);
    printf("Enter c:\t");
    scanf("%f",&c);
    float discriminant = sqrt((b*b)-(4*a*c));
    float root1 = (-b + discriminant)/(4*a);
    float root2 = (-b - discriminant)/(4*a);
    printf ("root 1 value is %f\n",root1);
    printf ("root 2 value is %f\n",root2);
    return 0;
}
