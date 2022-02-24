#include<stdio.h>
#include<stdlib.h>

int stack[100],top,choice,i,range,item;

void push();
void pop();
void display();

void main()
{
    top=-1;
    printf("\nEnter size of the stack: ");
    scanf("%d",&range);
    printf("|---------------------------------------------|");
    printf("\n                    MENU");
    printf("\n|---------------------------------------------|");
    printf("\n\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    while(choice!=4)
    {
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
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
            printf("\nPlease enter a valid choice.");
        }
    }
}

void push()
{
    if(top>range-1)
    {
        printf("\nStack Overflow!");
    }
    else
    {
        printf("\nEnter a value to be pushed into the stack: ");
        scanf("%d",&item);
        top++;
        stack[top]=item;
    }
    printf("\nStack created!");
}

void pop()
{
    if(top<=-1)
    {
        printf("\nStack Underflow!");
    }
    else
    {
        printf("\nPopped element is %d\n",stack[top]);
        top--;
    }
}

void display()
{
    if(top>=0)
    {
        printf("\nStack elements are:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
        printf("\nChoose next choice");
    }
    else
    {
        printf("Stack is empty!");
    }
}