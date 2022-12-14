
#include<stdio.h>
#include<stdlib.h>

struct node {

int data;
struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

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


        printf("| %d |->",head->data);
        head=head->next;
    }
    printf("NULL");

}

int Max(PNODE  head)
{
    int max=0;
    while(head!=NULL)
    {
        if(max<head->data)
        {
            max=head->data;
        }
        head=head->next;
    }
    return max;
}
int main()
{
    int iRet=0;
    PNODE first =NULL;
InsertFirst(&first, 11);
InsertFirst(&first,30);
InsertFirst(&first, 101);
InsertFirst(&first, 51);
InsertFirst(&first, 21);
InsertFirst(&first, 11);
Display(first);
iRet=Max(first);
printf("\n | %d |",iRet);
return 0;
}

