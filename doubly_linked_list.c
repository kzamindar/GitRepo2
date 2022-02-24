//doubly linked list creation, insertion and display

#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *prev;
    struct node *next;
}*head,*tail=NULL;

void main()
{
    struct node *newnode,*temp;
    int range,i;
    printf("Enter the range of the list: ");
    scanf("%d",&range);
    if (range==1)
    {
        head = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data of first node: ");
        scanf("%d",&head->data);
        head->prev=NULL;
        head->next=NULL;
        tail=head;
    }
    else
    {
        for(i=2;i<=range;i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter data in next nodes: ");
            scanf("%d",&newnode->data);
            newnode->prev=tail;
            newnode->next=NULL;
            tail->next=newnode;
            tail=newnode;
        }
    }
    //display
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL");
    }

}