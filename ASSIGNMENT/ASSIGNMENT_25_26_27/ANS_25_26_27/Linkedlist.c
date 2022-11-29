
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};

void create(struct node** head,int data)
{
    struct node *newnode;
    struct node *p=*head;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;

    if(*head==NULL)
    {
        *head=newnode;
        return;
    }


    while(p->next!=NULL)
    {

        p=p->next;

    }
    p->next=newnode;

    return;
}

void insert (struct node** head,int data,int pos)
{
    struct node *newnode;
    struct node *p=*head,*q;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    int k=1;
    if(pos==1)
    {
        newnode->next=head;
        head=newnode;
    }


    while(p!=NULL && k<pos)
    {
        k++;
        q=p;
        p=p->next;

    }
    q->next=newnode;
    newnode->next=p;

    return;
}

void print(struct node**head)
{

    struct node *p=*head;
    while(p!=NULL)
    {

        printf("%d->",p->data);
        p=p->next;
    }
}

int main()
{
    struct node* head=NULL;
    create(&head,5);
    create(&head,6);
    create(&head,7);
    create(&head,8);
    insert(&head,10,2);
    print(&head);
}
