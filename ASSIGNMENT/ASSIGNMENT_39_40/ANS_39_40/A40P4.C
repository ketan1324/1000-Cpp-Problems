
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
int SecMaximum(PNODE head)
{
    PNODE temp=head;
    int max=temp->data;
    int smax=temp->next->data;

   int val=0;

                  while(temp!=NULL)
                  {

                      if(max<temp->data)
                      {

                            smax=max;
                            max=temp->data;


                      }

                      temp=temp->next;

                  }


           return smax;

}


int main()
{
    int iRet=0;
    PNODE first = NULL;


    InsertFirst(&first,20);
    InsertFirst(&first,70);
    InsertFirst(&first,60);
    InsertFirst(&first,10);
    InsertFirst(&first,110);
    Display(first);
    iRet=SecMaximum(first);

    printf("\n\n%d",iRet);

}


