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
void RetSumDig(PNODE head)
{
    PNODE temp=head;
    int val=0;
    int iRem=0;
    int iSum=0;
    while(temp!=NULL)
    {
        iRem=0;
        iSum=0;
      val=temp->data;
      while(val!=0)
      {
          iRem=val%10;
          iSum=iSum+iRem;
          val=val/10;
      }
      printf(" additiojn is %d   ",iSum);
      temp=temp->next;
    }

}

int main()
{
    int iRet=0;
    PNODE first = NULL;


    InsertFirst(&first,2);
    InsertFirst(&first,20);
    InsertFirst(&first,10);
    InsertFirst(&first,10);
    InsertFirst(&first,117);
    Display(first);
    RetSumDig(first);

    //printf("\n\n%d",iRet);

}

