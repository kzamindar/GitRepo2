//Insertion at specific position


#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next; 
}*prev,*head=NULL;

void createList()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&ptr->data);
    ptr->next=head;
    head=ptr;
}

void beg()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&ptr->data);
    if(head==NULL)
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
        printf("\nEnter the item which you want to insert: ");
        scanf("%d",&item);
        newnode->data=item;
        printf("\nEnter the location where you want to insert the item: ");
        scanf("%d",&loc);
        
        temp = head;
        for(i=-1;i<loc;i++)
        {
            if(loc==0)
            {
                beg();
            }
            temp=temp->next;
            if(temp==NULL)
            {
                printf("Can't insert");
                return;
            }
            
        }
        newnode->next=temp->next;
        temp->next=newnode;

        //newnode->next=temp->next;
        //temp->next=newnode;
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
    insertSpec();
    printf("\nLinked list after insertion of a new node:\t");
    display();
}