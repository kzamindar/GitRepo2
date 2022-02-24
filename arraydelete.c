#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,n,pos,item;
    printf("Enter range of the array: ");
    scanf("%d",&n);
    printf("\nEnter elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter place from where you want to delete an element: ");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("\nIndex out of bound");
    }
    else
    {
        for(i=pos-1;i<=n-1;i++)
        {
            a[i]=a[i+1];
        }
    }
    
    printf("\nArray elements are:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}