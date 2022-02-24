#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*head,*tail=NULL;

void create(int range);
void insertion();
void display();
void display_from_end();
int range,val;

void main()
{
    printf("**********Doubly Linked List***********");
    printf("\nEnter range of the linked list: ");
    scanf("%d",&range);
    create(range);
    display();
    insertion();
    display();
    printf("\n\nDisplaying from last: ");
    display_from_end();
}

void create(int range)
{
    struct node *newnode;
    int i;
    for(i=0;i<range;i++)
    {
        if (head==NULL)
        {
            head = (struct node *)malloc(sizeof(struct node));
            printf("\nEnter data into first node: ");
            scanf("%d",&head->data);
            head->prev=NULL;
            head->next=NULL;
            tail=head;
        }
        else
        {
            printf("\nEnter data of next node: ");
            newnode = (struct node *)malloc(sizeof(struct node));
            scanf("%d",&newnode->data);
            newnode->prev=tail;
            newnode->next=NULL;
            tail->next=newnode;
            tail=newnode;
        }
    }
    printf("\nLinked List successfully created!");
}

void insertion()
{
    struct node *newnode;
    int i;
    if(head==NULL)
    {
        printf("Linked list empty!");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter data into the node to insert at beginning: ");
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
    printf("\nInserted successfully!");
}

void display()
{
    struct node *current;
    current=head;
    printf("\n\nLinked List is: ");
    while(current!=NULL)
    {
        printf("%d->",current->data);
        current=current->next;
    }
    printf("NULL");
}

void display_from_end()
{
    struct node *current;
    current=tail;
    while(current!=NULL)
    {
        printf("%d->",current->data);
        current=current->prev;
    }
    printf("NULL");
}