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
void ChkPallindrome(PNODE head)
{
    int iRem=0;
    int val=0;
    int iVal=0;
    PNODE temp=head;
    while(temp!=NULL)
    {
        iRem=0;
        iVal=0;
        val=temp->Data;
        while(val!=0)
        {
            iRem=val%10;
            iVal=iVal*10+iRem;
            val=val/10;
        }

        printf(" ..");
        if(iVal==temp->Data)
        {
            printf("%d",temp->Data);
        }
        temp=temp->Next;
    }

}
int main()
{
PNODE First = NULL;
InsertFirst(&First, 101);
InsertFirst(&First, 51);
InsertFirst(&First, 21);
InsertFirst(&First, 11);
ChkPallindrome(First);
// Call all functions for below problem statements.
return 0;
}

