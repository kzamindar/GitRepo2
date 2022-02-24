#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top,*top1,*newnode,*current;

void create();
void push(int item);
void pop();
void display();

void main()
{
    int item,choice;
    printf("|-----------------------------------------------|");
    printf("\n                  MENU");
    printf("\n|-----------------------------------------------|");
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
    create();
    while(choice!=4)
    {
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nEnter data into the stack: ");
            scanf("%d",&item);
            push(item);
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
            printf("Please enter a valid choice!");
        }
    }
}

void create()
{
    top=NULL;
}

void push(int item)
{
    if(top==NULL)
    {
        top = (struct node *)malloc(1*sizeof(struct node));
        top->data=item;
        top->next=NULL;
        printf("\nElement pushed!");
    }
    else
    {
        newnode = (struct node *)malloc(1*sizeof(struct node));
        newnode->data=item;
        newnode->next=top;
        top=newnode;
        printf("\nElement pushed!");
    }
}

void pop()
{
    top1=top;
    if(top1==NULL)
    {
        printf("\nStack is empty!");
    }
    else
    {
        top1=top1->next;
        printf("Popped value %d",top->data);
        free(top);
        top=top1;
    }
}   

void display()
{
    if(top1==NULL)
    {
        printf("\nStack is empty!");
    }
    else
    {
        while(top1!=NULL)
        {
            printf("%d\n",top1->data);
            top1=top1->next;
        }
    }
}