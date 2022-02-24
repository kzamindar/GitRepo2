#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*tail=NULL;

void create();
void insert_beg();
void insert_end();
void delete();
void display();

void main()
{
    int range,data,choice;
    while (choice!=6)
    {
        printf("\n1.Press 1 for linked list creation.\n2.Press 2 for insertion at beginning.\n3.Press 3 for insertion at end.\n4.Press 4 for deletion.\n5.Press 5 for display.\n6.Press 6 to exit.");
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
            printf("\n\nEnter range of the linked list: ");
            scanf("%d",&range);
            create(range);
            break;
            case 2:
            printf("Enter data to be inserted at the beginning: ");
            scanf("%d",&data);
            insert_beg(data);
            break;
            case 3:
            printf("Enter data to be inserted at the end: ");
            scanf("%d",&data);
            insert_end(data);
            break;
            case 4:
            delete();
            break;
            case 5:
            display();
            break;
            case 6:
            exit(0);
            break;
            default:
            printf("\n\nEnter valid choice");
        }
    }
}

void create(int range)
{
    struct node *ptr,*temp;
    int data,i;
    head = (struct node *)malloc(sizeof(struct node));
    if (head==NULL)
    {
        printf("\nCannot allocate memory");
    }
    else
    {
        printf("Enter data into node 1: ");
        scanf("%d",&data);
        head->data=data;
        head->next=NULL;
        temp=head;
        for(i=2;i<=range;i++)
        {
            ptr = (struct node *)malloc(sizeof(struct node));
            if(ptr==NULL)
            {
                printf("Cannot allocate memory");
                break;
            }
            else
            {
                printf("Enter data into node %d: ",i);
                scanf("%d",&data);
                ptr->data=data;
                ptr->next=NULL;
                temp->next=ptr;
                temp=ptr;
            }
            
        }
        printf("\n\nLinked list successfully created!");
    }
    
}

void insert_beg(int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    printf("\n\nNode inserted at the beginning");
}

void insert_end(int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;
    if (head==NULL)
    {
        head=ptr;
        tail=ptr;
    }
    else
    {
        tail->next=ptr;
        tail=ptr;
    }
    printf("\n\nNode inserted at the end");
}

void delete()
{
    struct node *ptr;
    if (head==NULL)
    {
        printf("\n\nList is empty");
    }
    else
    {
        ptr=head;
        head=ptr->next;
        free(ptr);
        printf("\n\nNode successfully deleted");
    }
}

void display()
{
    struct node *temp;
    if(temp==NULL)
    {
        printf("\n\nList Empty!");
    }
    else
    {
        temp=head;
        printf("\n\nLinked list is:\t");
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL");
    }
    
}