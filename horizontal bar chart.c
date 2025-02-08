#include<stdio.h>
#include<stdlib.h>

int numOfDot;
int vertical;
int start = 0;

void bar(int dot);
void verticals(int vert);

void bar(int dot)
{
    for (int i = 1; i <= dot; i++)
    {
        printf("ò");

    }
}

void verticals(vert)
{
    while (start!=vertical)
    {
        printf("step %d:\n",start);
        bar(numOfDot+=4);
        printf("\n");
        start++;
    }
}
int main()
{
    printf("Enter number of dots to print horizontally:\n");
    scanf("%d",&numOfDot);
    printf("Enter number of horizontal lines u want to be printed:\n");
    scanf("%d",&vertical);
    verticals(vertical);
    //bar(numOfDot);
}
