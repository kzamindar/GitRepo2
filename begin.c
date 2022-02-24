#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};

void addElement(struct node **head, int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=*head;
    *head=newnode;
}

void display(struct node *head)
{
    struct node *current = head;
    while(current!=NULL)
    {
        printf("%d->",current->data);
        current=current->next;
    }
    printf("NULL\n");
}

void main()
{
    struct node *head=NULL;
    printf("\nLinked list elements are:\t");
    
    addElement(&head,10);
    addElement(&head,20);
    addElement(&head,30);
    addElement(&head,40);
    addElement(&head,50);

    display(head);
}

