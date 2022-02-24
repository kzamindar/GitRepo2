#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,n,pos,item;
    printf("Enter range of the array: ");
    scanf("%d",&n);
    printf("\nEnter elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter place where you want to enter the element: ");
    scanf("%d",&pos);
    printf("\nEnter the element you want to enter: ");
    scanf("%d",&item);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
        a[pos-1]=item;
    }
    printf("\nArray elements are:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}