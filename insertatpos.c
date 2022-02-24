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
    struct node *prev,*head=NULL,*newnode,*ptr,*temp,*temp1;
    int i,range,loc,item;
    printf("Enter range of the list: ");
    scanf("%d",&range);
    printf("\nEnter elements into the list:\t");
    for(i=0;i<range;i++)
    {
        ptr = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        if (head==NULL)
        {
            head=ptr;
            prev=ptr;
        }
        else
        {
            prev->next=ptr;
            prev=ptr;
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    printf("\nSingly Linked List Successfully Created!");

    //Insert after a specific node
    
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the item which you want to insert: ");
    scanf("%d",&item);
    printf("\nEnter the location of the new item: ");
    scanf("%d",&loc);

    newnode->data=item;
    temp1 = head;
    for(i=0;i<=loc;i++)
    {
        temp1=temp1->next;
        if(temp1==NULL)
        {
            printf("\nInvalid Location");
        }
    }
    newnode->next=temp1->next;
    temp1->next=newnode;
    printf("\nNew node successfully inserted after %d location!",loc);

    //displaying list again
    printf("\n\nLinked List after insertion of new node: ");
    while(temp1!=NULL)
    {
        printf("%d->",temp1->data);
        temp1=temp1->next;
    }
    printf("NULL");
}