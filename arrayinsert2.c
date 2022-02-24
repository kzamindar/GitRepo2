#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],i,n,pos,item;
    
    //enter array range
    printf("Enter range of the array: ");
    scanf("%d",&n);
    
    //enter array elements
    printf("\nEnter elements into the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    //enter position for new element to be added 
    printf("\nEnter position for the new element: ");
    scanf("%d",&pos);
    
    //enter element to be added 
    printf("\nEnter element you want to enter: ");
    scanf("%d\t",&item);
    
    //logic
    for(i=0;i<=pos-1;i++)
    {
        a[i+1]=a[i];
        a[pos-1]=item;
    }

    //array printing
    printf("\nArray elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d",&a[i]);
    }

}