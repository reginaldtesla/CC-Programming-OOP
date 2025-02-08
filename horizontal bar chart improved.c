#include <stdio.h>
#include<stdlib.h>
#include<time.h>

//Declaration of variables
int bars;
int randomNumbers[];
//Declaration of fxns to use
void numBars(int bars);
void randomNumberGenerator(int number);

//Print the random numbers
void randomNumberGenerator(number){
    srand(time(NULL));
    for(int i=0;i<=bars;i++){
    randomNumbers[i]=rand()%bars;
    }
    numberOfDots();
}

//print number of dots
void numberOfDots(){
    for(int i = 0; i<=bars;i++){
            printf("step %d \n ",i);
            for(int j = 0;j<=randomNumbers[i];j++){
                printf(".");
        }printf("\n");
    }
}

//print the bars
void numBars(bars){
    randomNumberGenerator(bars);
}

int main(){
    printf("enter number of bars to print: ");
    scanf("%d",&bars);
    numBars(bars);
}
