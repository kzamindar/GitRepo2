//Insertion at end

#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next; 
}*prev,*head=NULL;

void createList()
{
    struct node *ptr,*temp;
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

void insertSpec()
{
    struct node *newnode,*temp;
    int i,loc,item;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        newnode->data=item;
        temp = head;
    for(i=0;i<loc;i++)
    {
        temp=temp->next;
        if(temp==NULL)
        {
            printf("Can't insert");
            return;
        }
    }
    newnode->next=temp->next;
    temp->next=newnode;
    printf("\nNode Inserted");
    }
   
}

void display()
{
    struct node *current = head;
    while(current!=NULL)
    {
        printf("%d->",current->data);
        current=current->next;
    }
    printf("NULL");
    
}

//driver code
void main()
{
    int i,range,loc,item;
    printf("Enter range of the list: ");
    scanf("%d",&range);
    printf("\nEnter elements into the list:\t");
    for(i=0;i<range;i++)
    {
        createList();
    }
    printf("\nLinked List:\t");
    display();

    //after given node insertion
    printf("\nEnter the item which you want to insert: ");
    scanf("%d",&item);
    printf("\nEnter the location after which you want to insert item: ");
    scanf("%d",&loc);
    insertSpec();
    printf("\nLinked list after insertion of a new node:\t");
    display();
}