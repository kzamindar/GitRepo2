//Insert at Beginning

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void main()
{
    int range,i;
    struct node *head=NULL,*newnode,*current;
    printf("\nEnter range: ");
    scanf("%d",&range);
    printf("\nEnter elements in the linked list: ");
    for(i=0;i<range;i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode; 
    }
    
    current=head;
    printf("Linked list elements are:\t");
    while(current!=NULL)
    {
        printf("%d->",current->data);
        current=current->next;
        
    }
    printf("NULL\n");
    
}