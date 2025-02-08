
#include<stdio.h>
#include<stdlib.h>
int main()
{
    func(1);
}
void func(int num)
{
    printf("num=%d\t",num);
    func(num+1);

}
