#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],i,n,first,last,middle,item;
    
    //enter array range
    printf("Enter range of the array: ");
    scanf("%d",&n);
    
    //enter array elements
    printf("\nEnter elements into the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    //enter element to be searched
    printf("\nEnter element you want to search: ");
    scanf("%d",&item);
    
    //logic
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if (a[middle]<item)
        {
            first=middle+1;
        }
        else if(a[middle==item])
        {
            printf("\nElement Found at position %d",middle+1);
            break;
        }
        else if(a[middle]>item)
        {
            last=middle-1;
        }
        else if(first>last)
        {
            printf("No element found!");
        }
        else
        {
            printf("Invalid Input");
        }
    }
}