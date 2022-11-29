#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
struct node
{
int Data;
node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
void InsertFirst(PPNODE Head , int no )
{
PNODE newn = NULL;
newn = (PNODE)malloc(sizeof(NODE));
newn->Next = NULL;
newn->Data = no;
if (*Head == NULL)
{
*Head = newn;
}
else
{
newn -> Next = *Head;
*Head = newn;
}
}
void DisplaySmall(PNODE head)
{
    int val=0;
    int iRem=0;
    PNODE temp=head;
    while(temp!=NULL)
    {
        val=temp->Data;
        int iLarge=0;
        int iF=0;
        while(val>0)
        {
            iRem=val%10;
            if(iLarge<iRem)
            {
                iLarge=iRem;
            }
            val=val/10;

        }
        printf("  ");
        printf("%d",iLarge);
        temp=temp->Next;
    }
}


int main()
{
PNODE First = NULL;
InsertFirst(&First, 9998);
InsertFirst(&First, 54);
InsertFirst(&First, 90);
InsertFirst(&First, 01);
DisplaySmall(First);
// Call all functions for below problem statements.
return 0;
}


