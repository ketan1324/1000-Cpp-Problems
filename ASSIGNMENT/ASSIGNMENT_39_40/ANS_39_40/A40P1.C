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
void SearchPerfect(PNODE head)
{

    PNODE temp=head;
    int i=0;
        int iRem=0;
        int iSum=0;
        int val;

    while(temp!=NULL)
    {

        iSum=0;
        val=temp->data;
        for(i=1;i<val;i++)
        {
            if(val%i==0)
            {
                iSum=iSum+i;
            }


        }
        if(val==iSum)
            {
                printf("\n %d",iSum);
            }
    temp=temp->next;
    }

}




int main()
{
    PNODE first = NULL;


    InsertFirst(&first,6);
    InsertFirst(&first,21);
    InsertFirst(&first,51);
    InsertFirst(&first,28);
    InsertFirst(&first,111);
    Display(first);
    SearchPerfect(first);

}

