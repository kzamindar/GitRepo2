//Insertion at beginning 

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*tail=NULL;

void main()
{
    struct node *current,*newnode,*node;
    int i;
    //printf("Enter range for linkedlist: ");
    //scanf("%d",&n);
    head=NULL;
    printf("\nEnter elements in linked list:\t");
    for(i=0;i<n;i++)
    {
        node=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&node->data);
        node->next=NULL;
        if(head==NULL)
        {
            head=node;
            tail=node;
        }
        else
        {
            tail->next=node;
            tail=node;
        }
        
    }
    
    //display 
    current=head;
    printf("\nLinked list elements are:\n");
    while (current!=NULL)
    {
        printf("%d\t",current->data);
        current=current->next;
    }
      
    //new node at beginning
    printf("\nEnter new element to be inserted in the list: ");
    for(i=0;i<n+1;i++)
    {
        scanf("%d",&newnode->data);
        newnode->next=head;
        newnode=head;
    }

    current=newnode;
    printf("\nNew linked list with new element inserted is: ");
    while(current!=NULL)
    {
        printf("%d",current->data);
        current=current->next;
    }
    
    
}
