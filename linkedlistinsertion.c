//Insertion at beggining 

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *prev,*head,*p,*temp;
    int n,i;
    printf("Enter range for linkedlist: ");
    scanf("%d",&n);
    head=NULL;
    printf("\nEnter elements in linked list:\t");
    for(i=0;i<n;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
        head=p;
        else
        prev->next=p;
        prev=p;
    }
    temp=head;
    printf("\nLinked list elements are:\n");
    while (temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
