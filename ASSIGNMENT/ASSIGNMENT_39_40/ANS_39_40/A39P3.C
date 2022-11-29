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

int Sum(PNODE head)
{
    PNODE temp=head;
    int iSum=0;

    int iVal=0;
    while(temp!=NULL)
    {

        iVal=temp->data;
        iSum=iSum+iVal;
        temp=temp->next;
    }
    return iSum;
}

int main()
{
    int iRet=0;
    PNODE first =NULL;
InsertFirst(&first, 10);
InsertFirst(&first,30);
InsertFirst(&first, 20);

Display(first);
iRet=Sum(first);
printf("\n sum is  | %d |",iRet);
return 0;
}

