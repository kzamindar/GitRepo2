/*
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void printList(struct node *n)
{
    while(n!=NULL)
    {
        printf("%d\t",n->data);
        n=n->next;
    }
}

void main()
{
    struct node *head=NULL;
    struct node *second=NULL;
    struct node *third=NULL;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    head->data=12;
    head->next=second;

    second->data=81;
    second->next=third;

    third->data=101;
    third->next=NULL;

    printf("The list is:\t");
    printList(head);
    
}
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*tail=NULL,*current,*temp;

void creation()
{
    struct node *newnode;    
    int n,i;
    printf("Enter linked list range: ");
    scanf("%d",&n);
    printf("Enter linked list elements: ");
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
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
    
    //display
    current=head;
    printf("Linked list elements are:\t");
    while(current!=NULL)
    {
        printf("%d->",current->data);
        current=current->next;
    }
    printf("NULL");
}

void beginning(struct node **head,int val)
{
    //new node
    printf("\n------------------------------------------------------");
    struct node *end = (struct node *)malloc(sizeof(struct node));
    printf("\n\nEnter element to insert at end: ");
    end->data=val;
    end->next=NULL;
    if(*head==NULL) 
    {
        *head=end;
    }
    else
    {
        struct node *lastNode = (struct node *)malloc(sizeof(struct node));
        while(lastNode!=NULL)
        {
            lastNode = lastNode->next;
        } 
        lastNode->next = end;
    }
    
    
}

void newNodeDisplay(struct node *head)
{
    //new node display
    struct node *end;
    printf("\nNewly added node is: %d",end->data);
    printf("Linked list after addition of new element is: ");
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

void main()
{
    creation();

    beginning(&head,6);

    newNodeDisplay(head);
        
}