#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
}*head=NULL;

void create(int n);
void insert_beg(int data);
void display();
void deleteFirst();
void deletespec();

void main()
{
    int n,data,choice;
    printf("\nEnter total number of nodes: ");
    scanf("%d",&n);
    create(n);
    printf("\n\nLinked list is:\t");
    display();
    
    while(choice!=5)
    {
        printf("\n\n1.Press 1 to insert data at the beginning.\n2.Press 2 to delete from beginning.\n3.Press 3 to delete from a specific position.\n4.Press 4 to display the data.\n5.Press 5 to exit.");
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\n\nEnter data to insert at the beginning: ");
            scanf("%d",&data);
            insert_beg(data);
            break;

            case 2:
            printf("\n\nDeletion from the beginning");
            deleteFirst();
            break;

            case 3:
            printf("\n\nDeletion from a specific position");
            deletespec();
            break;

            case 4:
            printf("\n\nLinked list is:\t");
            display();
            break;

            case 5:
            exit(0);
            break;

            default:
            printf("\n\nEnter valid choice");
        }
    }
}

void create(int n)
{
    struct node *newnode,*temp;
    int data,i;
    head = (struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("\nUnable to allocate memory");
    }
    else
    {
        printf("\nEnter data of node 1: ");
        scanf("%d",&data);
        head->data=data;
        head->next=NULL;
        temp=head;
        for(i=2;i<=n;i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if(newnode==NULL)
            {
                printf("\nUnable to allocate memory");
                break;
            }
            else
            {
                printf("\nEnter data of node %d: ",i);
                scanf("%d",&data);
                newnode->data=data;
                newnode->next=NULL;
                temp->next=newnode;
                temp=temp->next;
            }
        }
        printf("\nLinked List successfully created!");
    }
}

void insert_beg(int data)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("\nUnable to allocate memory");
    }
    else
    {
        newnode->data=data;
        newnode->next=head;
        head=newnode;
        printf("\nNew node inserted at the beginning");
    }
}

void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("\nList is empty");
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

void deleteFirst()
{
    struct node *delete;
    if(head==NULL)
    {
        printf("\nList is already empty");
    }
    else
    {
        delete=head;
        head=head->next;
        printf("\nDeleted data is %d",delete->data);
        free(delete);
        printf("\nSuccessfully deleted from the list");
    }
}

void deletespec()
{
    struct node *ptr,*ptr1;
    int loc,i;
    printf("\nEnter the location from where you want to delete the node: ");
    scanf("%d",&loc);
    ptr=head;
    for(i=0;i<loc;i++)
    {
        ptr1=ptr;
        ptr=ptr->next;
        if(ptr==NULL)
        {
            printf("\nThere are less than %d elements in the list",loc);
        }
    }
    ptr1->next=ptr->next;
    free(ptr);
    printf("Node successfully deleted from location %d",loc);
}