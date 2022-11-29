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
void DisplayProduct(PNODE head)
{
    int val=0;
    int irem=0;
    int iMult=1;
    PNODE temp=head;
    while(temp!=NULL)
    {
        val=temp->Data;
        irem=0;
        iMult=1;
        while(val!=0)
        {
            irem=val%10;
            if(irem==0)
            {
                irem=1;
            }
            iMult=iMult*irem;
            val=val/10;
        }
        printf("  ");
        printf("%d",iMult);
        temp=temp->Next;
    }
}


int main()
{
PNODE First = NULL;
InsertFirst(&First, 101);
InsertFirst(&First, 51);
InsertFirst(&First, 27);
InsertFirst(&First, 11);
DisplayProduct(First);
// Call all functions for below problem statements.
return 0;
}

