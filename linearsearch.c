#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],i,n,c,item;
    
    //enter array range
    printf("Enter range of the array: ");
    scanf("%d",&n);
    
    //enter array elements
    printf("\nEnter elements into the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    //enter element to be added 
    printf("\nEnter element you want to search: ");
    scanf("%d",&item);
    
    //logic
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        c=1;
    }

    //array printing
    if(c==1)
    {
        printf("Element found!");
    }
    else
    {
        printf("Element not found!");
    }
}