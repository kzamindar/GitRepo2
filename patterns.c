#include<stdio.h>
#include<conio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf(" ");
        }
       //printf("\n");
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    
    
    }
}