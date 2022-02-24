//Insertion at end

#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next; 
};

void main()
{
    struct node *tail,*head=NULL,*temp,*newnode;
    int range,i;
    printf("Enter range of linked list: ");
    scanf("%d",&range);
    printf("Enter %d elements in the list: ",range);
    for(i=0;i<range;i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }
    
    temp=head;
    printf("\nLinked list elements are:\t");
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
