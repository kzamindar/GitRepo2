#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
}*head=NULL,*top;

int i,range,item,choice;
//void create();
void push();
void pop();
void display();

void main()
{
    printf("\nEnter the size of the stack: ");
    scanf("%d",&range);
    printf("|-----------------------------------------|");
    printf("\n                  MENU");
    printf("\n|-----------------------------------------|");
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    while(choice!=4)
    {
        switch(choice)
        {
            //case 1:
            //create();
            //break;

            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(0);
            break;

            default:
            printf("\nPlease enter a valid choice!");
        }
    }
}

/*void create()
{
    struct node *newnode,*top;
    for(i=0;i<range;i++)
    {
        if(head==NULL)
        {
            head = (struct node *)malloc(sizeof(struct node));
            printf("Enter data of first node: ");
            scanf("%d",&head->data);
            head->next=NULL;
            top=head;
        }
        else
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("\nEnter data of next node: ");
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            top->next=newnode;
            top=newnode;
        }
    }
    printf("Stack Created!");
}*/

void push()
{
    struct node *newnode;
    if()
    {
        printf("\nStack Overflow!");
    }
    else
    {
        if(head==NULL)
        {
            head = (struct node *)malloc(sizeof(struct node));
            printf("\nEnter data of first node to push into the stack: ");
            scanf("%d",&item);
            head->data=item;
            head->next=NULL;
            top=head;
            printf("\n\nElement Pushed!");
        }
        else
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("\nEnter data of next node to push into the stack: ");
            scanf("%d",&item);
            newnode->data=item;
            newnode->next=NULL;
            top->next=newnode;
            top=newnode;
            printf("\n\nElement Pushed!");
        }
    }
}

void pop()
{
    struct node *pop;
    top=head;
    if (top==NULL)
    {
        printf("\nStack Underflow");
    }
    else
    {
        pop=top;
        top=top->next;
        printf("\nElement popped from the stack is: ",top);
        free(pop);
    }
}

void display()
{
    struct node *current;
    current=top;
    printf("\nStack elements are: ");
    while(current!=NULL)
    {
        printf("%d->",current->data);
        current=current->next;
    }
}

