
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node*  PNODE;
typedef struct node**  PPNODE;

void InsertFirst(PPNODE head,int iNo)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;
    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        newn->next=*head;
        *head=newn;
    }

}



void Display(PNODE head)
{
    while(head!=NULL)
    {
        printf("| %d |=>",head->data);
        head=head->next;
    }
}
int AddEven(PNODE head)
{
    PNODE temp=head;
    int val;
    int iESum=0;
    while(temp!=NULL)
    {
    val=temp->data;
                   if(val%2==0)
                       {
                             iESum=iESum+val;
                       }
                                           temp=temp->next;
    }
     return iESum;

}

int main()
{
    int iRet=0;
    PNODE first = NULL;


    InsertFirst(&first,2);
    InsertFirst(&first,20);
    InsertFirst(&first,10);
    InsertFirst(&first,10);
    InsertFirst(&first,110);
    Display(first);
    iRet=AddEven(first);

    printf("\n\n%d",iRet);

}

