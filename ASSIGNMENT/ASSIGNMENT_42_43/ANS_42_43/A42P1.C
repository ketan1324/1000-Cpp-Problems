#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
struct Node *prev;
};
typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;


void InsertLast(PPNODE Head, PPNODE Tail, int value)
{
PNODE newn = NULL;
newn = (PNODE)malloc(sizeof(NODE));
newn->data = value;
newn->next = NULL;
newn->prev = NULL;
if((*Head ==NULL) && (*Tail == NULL)) // Linked list is empty
{
*Head = newn;
*Tail = newn;
}
else // Linked list contains atleast one node
{
(*Tail)->next = newn;
newn->prev = *Tail;
*Tail = (*Tail) ->next; // *Tail = newn;
}
(*Tail)->next = *Head;
(*Head)->prev = *Tail;
}
void InsertFirst(PPNODE Head, PPNODE Tail, int value)
{
PNODE newn = NULL;
newn = (PNODE)malloc(sizeof(NODE));
newn->data = value;
newn->next = NULL;
newn->prev = NULL;
if((*Head ==NULL) && (*Tail == NULL)) // Linked list is empty
{
*Head = newn;
*Tail = newn;
}
else // Linked list contains atleast one node
{
newn->next = *Head;
(*Head)->prev = newn;
*Head = (*Head)->prev;
}
(*Tail)->next = *Head;
(*Head)->prev = *Tail;
}
/*void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    *Head=*Head->next;
    free(*Tail->next);
    *Head->prev=*Tail;
    *Tail->next=*Head;

}*/
/*void DeleteLast(PPNODE Head, PPNODE Tail)
{
*Tail=(*Tail->prev);
free(*Tail->next);
 *Tail->next=*Head;
 *Head->prev=*Tail;



}*/
/*void DeleteAtPos(PPNODE Head, PPNODE Tail, int pos)
{
PNODE temp=*Head;
int i=0;
for(i=1;i<pos-1;i++)
{
    temp=temp->next;
}
temp->next=temp->next->next;
free(temp->next->prev);
temp->next->prev=temp;
}*/
/*void InsertAtPos(PPNODE Head, PPNODE Tail, int value, int pos)
{
    PNODE newn=NULL;
    int i=0;
    PNODE temp=NULL;

newn= (PNODE)malloc(sizeof(NODE));
        newn->data = value;
        newn->next = NULL;
        newn->prev = NULL;

        for(i = 1; i<pos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;
}*/
void Display(PNODE Head, PNODE Tail)
{
if((Head == NULL) && (Tail == NULL))
{
return;
}
do
{
printf("|%d| -> ",Head->data);
Head = Head -> next;
}while(Head != Tail -> next);
}
/*int Count(PNODE Head, PNODE Tail)
{
// Logic
}*/
int main()
{
PNODE First = NULL;
PNODE Last = NULL; // Nawin
int no = 0;
InsertFirst(&First,&Last,11);
InsertFirst(&First,&Last,21);
InsertFirst(&First,&Last,51);
InsertFirst(&First,&Last,111);
InsertFirst(&First,&Last,541);
InsertFirst(&First,&Last,941);
InsertFirst(&First,&Last,1211);
//DeleteFirst(&First,&Last);


//DeleteAtPos(&First,&Last,4);
//InsertAtPos(&First,&Last,145,5);
Display(First,Last);

// Call all the functions
return 0;
}
