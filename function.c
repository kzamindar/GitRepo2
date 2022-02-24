#include<stdio.h>
#include<conio.h>
int x,y,z;

void func(int x, int y)
{
    z=x+y;
}

void main()
{
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    func(x,y);
    printf("Addition of %d and %d is %d",x,y,z);
}
