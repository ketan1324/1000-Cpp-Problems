
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
void SearchPrime(PNODE head)
{
    int i=0;
    int val=0;

    PNODE temp=head;
    while(temp!=NULL)
    {
        int iNo=0;
        val=temp->data;
                   for(i=2;i<val;i++)
                             {
                                     if(val%i==0)
                                                 {
                                                         iNo=1;
                                                         break;

                                                  }

                              }
                              if(iNo==0)
                                                  {
                                                             printf("\n\n| %d |",val);
                                                   }

        temp=temp->next;

    }
}


int main()
{
    PNODE first = NULL;


    InsertFirst(&first,2);
    InsertFirst(&first,21);
    InsertFirst(&first,51);
    InsertFirst(&first,11);
    InsertFirst(&first,111);
    Display(first);
    SearchPrime(first);

}

