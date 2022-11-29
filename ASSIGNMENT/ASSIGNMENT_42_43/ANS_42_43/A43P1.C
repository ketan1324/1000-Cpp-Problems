#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data ;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,PPNODE tail,int val)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=val;
    newn->next=NULL;

    if((*head==NULL)&&(*tail==NULL))
    {
        *head=newn;
        *tail=newn;
    }
    else
    {
        newn->next=*head;
        *head=newn;
    }
    (*tail)->next=*head;

}
void InsertLast(PPNODE head,PPNODE tail,int val)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=val;
    newn->next=NULL;

    if((*head==NULL)&&(*tail==NULL))
    {
        *head=newn;
        *tail=newn;
    }

    else
    {
        (*tail)->next=newn;
        *tail=newn;
    }
    (*tail)->next=*head;

}
void InsertAtPos(PPNODE head,PPNODE tail,int val,int pos)
{
    PNODE newn=NULL;
    PNODE temp=*head;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=val;
    newn->next=NULL;

    int i=0;
    for(i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    newn->next=temp->next;
    temp->next=newn;

}
void DeleteFirst(PPNODE head,PPNODE tail)
{
    PNODE temp=*head;
    *head=(*head)->next;
    free(temp);
    (*tail)->next=*head;
}
void DeleteLast(PPNODE head,PPNODE tail)
{
    PNODE temp=*head;
    while(temp->next!=*tail)
    {
        temp=temp->next;
    }
    free(*tail);
    *tail=temp;
    (*tail)->next=*head;
}
void DeleteAtPos(PPNODE head,PPNODE tail,int pos)
{
    int i=0;
    PNODE temp=NULL;
    PNODE temp2=NULL;
    for(i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
    temp2=temp;
    free(temp2->next);
}
void Display(PNODE head,PNODE tail)
{
    do
    {
        printf("| %d |<=>",head->data);
        head=head->next;
    }while(head!=tail->next);

}

int Count(PNODE head,PNODE tail)
{
    int iCnt=0;
    if((head == NULL) && (tail == NULL))
    {
        return 0;
    }
    do
    {
        iCnt++;
        head=head->next;
    }while(head!=tail->next);
  return iCnt;
}



int main()
{
    PNODE first =NULL;
    PNODE last =NULL;
    int choice=1,no=0;

    while(choice)
    {
        printf("======================================================================\n");
        printf("1:InsertFirst\n2:InsertLast\n3:InsertAtPos\n4:DeleteFirst\n5:DeleteLast6:DeleteAtPos\n7:Display\n8:Count\n0:Exit\n");
        printf("======================================================================\n");
        scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter the number :");
        scanf("%d",&no);
        InsertFirst(&first,&last,no);
        break;

         case 2:
        printf("Enter the number :");
        scanf("%d",&no);
        InsertLast(&first,&last,no);
        break;

         case 3:
        printf("Enter the number :");
        scanf("%d",&no);
        InsertAtPos(&first,&last,no,3);
        break;

         case 4:
        DeleteFirst(&first,&last);
        break;

         case 5:
        DeleteLast(&first,&last);
        break;

         case 6:
        DeleteAtPos(&first,&last,3);
        break;

         case 7:
        Display(first,last);
        break;

         case 8:
        printf("Number of node are %d\n", Count(first, last));
        break;
    }
}
    return 0;
}
