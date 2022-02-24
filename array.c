#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,n;
    printf("Enter range of the array: ");
    scanf("%d",&n);
    printf("\nEnter elements into the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nArray elements are:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}