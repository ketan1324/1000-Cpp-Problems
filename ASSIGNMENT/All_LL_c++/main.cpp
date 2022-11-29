#include<iostream>
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL

{
private:
    PNODE head;
    int iSize;
public:
    SinglyLL()
    {
        head=NULL;

    }
    void InsertFirst(int value)
    {
        PNODE newn=new NODE;
        newn->data=value;
        newn->next=NULL;
        if(head==NULL)
        {
            head=newn;
        }
        else
        {
            newn->next=head;
            head=newn;
        }
    }
    void InsertLast(int value)
    {
        PNODE newn=new NODE;
        newn->data=value;
        newn->next=NULL;
        if(head==NULL)
        {
            head=newn;
        }
        else
        {
            PNODE temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newn;
        }
    }
    void InsertAtPos(int value,int Pos)
    {
        PNODE newn=new NODE;
        newn->data=value;
        newn->next=NULL;
        int i=0,pos;
        if(head==NULL)
        {
            head=newn;
        }


        else
        {
            PNODE temp=head;
            for(i=1;i<pos-1;i++)
            {
                temp=temp->next;
            }
            newn->next=temp->next;temp->next=newn;
        }
    }
    void DeleteFirst()
    {

       PNODE temp  = head;

        if(head != NULL)
        {
         head = head -> next;
         delete(temp);
        }
    }
    void DeleteLast()
    {
          PNODE temp = head;

    if(head == NULL)   // If linked list is empty
    {
        return;
    }
    else if((head) -> next == NULL)    // If linked list contains single node
    {
        delete(head);
        head = NULL;
    }
    else
    {


    while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
    }
    void DeleteAtPos(int Pos)
    {
        PNODE temp=head;
        int size = 0,i = 0;

    PNODE temp, temp2;



        PNODE temp=head;
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
         temp2 = temp->next;
        temp->next=temp->next->next;
        free(temp2);

    }
    void Display()
    {
        PNODE temp=head
        while(temp!=nul)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"\n";
    }
    int Count()
    {
         int iCnt = 0;

    while(head != NULL)
    {
        iCnt++;
        head = head->next;
    }

    return iCnt;
    }
}
};
class SinglyCL
{
private:
    PNODE head;
    PNODE tail;
    int no;
public:
    SinglyCL()
    {
      head=NULL;
      tail=NULL;
    }
    void InsertFirst(int value)
    {
        PNODE newn=new NODE;
        newn->data=value;
        newn->next;
        if((head==NULL)&&(tail==NULL))
        {
            head=newn;
            tail=newn;
        }
        else
            {
                newn->next=head;
                head=newn;
            }
            tail->next=head;
    }
    void InsertLast(int value)
    {
        PNODE temp=head;

        PNODE newn=new NODE;
        newn->data=value;
        newn->next;
        if((head==NULL)&&(tail==NULL))
        {
            head=newn;
            tail=newn;
        }
        else
        {
            tail->next=newn;
            tail=newn;
        }
        tail->next=head;


    }
    void InsertAtPos(int value,int pos)
    {
        int iCnt = 0, i = 0;
    PNODE temp = *head;
    PNODE newn = NULL;

    iCnt = Count(head, tail);

    if((pos < 1) || (pos > iCnt+1))
    {
        return;
    }

    if(pos == 1)
    {
        InsertFirst(head, tail, value);
    }
    else if(pos == iCnt +1)
    {
        InsertLast(head,tail, value);
    }
    else
    {
        for(i = 1; i<pos-1;i++)
        {
            temp = temp->next;
        }
        newn = new NODE
        newn->data = value;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;
    }

    }
    void DeleteFirst()
    {
         if((head == NULL) && (tail == NULL))
    {
        return;
    }
    if(head == tail)
    {
        free(head);
        head = NULL;
        tail = NULL;
        return;
    }
    else
    {
        head = (head)->next;
        delete((tail)->next);
        (tail)->next = head;
    }
    }
    void DeleteLast()
    {
        PNODE temp = head;

    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    if(head == tail)
    {
        free(head);
        head = NULL;
        tail = NULL;
        return;
    }
    else
    {
        while(temp->next != tail)
        {
            temp = temp->next;
        }

        free(tail);
        tail = temp;
        (tail)->next = head;
    }
    }
    void DeleteAtPos(int Pos)
    {
         PNODE temp1 = head;
    PNODE temp2 = NULL;
    int iCnt = 0, i = 0;

    iCnt = Count(head,tail);

    if((pos < 1) || (pos > iCnt))
    {
        return;
    }
    if(pos == 1)
    {
        DeleteFirst(head, tail);
    }
    else if(pos == iCnt)
    {
        DeleteLast(head, tail);
    }
    else
    {
        for(i = 1; i< pos-1; i++)
        {
            temp1 = temp1->next;
        }

        temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    }

    }
    void Display()
    {
      PNODE temp=head;
      while(head!=NULL)
      {
          cout<<temp->data<<"\n";
          temp=temp->next;
      }
      printf("\n");

    }
    int  Count()
    {
        PNODE temp=head;
        int iCnt=0;
      while(head!=NULL)
      {
          iCnt++;
          temp=temp->next;
      }
      printf("\n");
    }



};
/*class DoublyLL
{

};
class DoublyCL
{

};*/
int main()
{
    PNODE first=NULL;
    PNODE last=NULL;
    SinglyLL obj1;
    SinglyCL obj2;
    int choice=1,no=0,choice2=1,pos=0;
    while(choice!=0)
    {
        cout<<"Welcome to application\n";
        cout<<"Enter the choice\n";
        cout<<"1:Singly linear linked list\n";
        cout<<"2:Singly Circular linked list\n";
        if(choice==1)
        {
            while(choice2!=0)
            {
                cout<<"Enter your Choice :\n";
                cout<<"1:InsertFirst\n";
                cout<<"2:InsertLast\n";
                cout<<"3:InsertAtPosition\n";
                cout<<"4:DeleteFirst\n";
                cout<<"5:DeleteLast\n";
                cout<<"6:DeleteAtPosition\n";
                cout<<"7:Display\n";
                cout<<"8:Count\n";
                cin>>choice2;

            switch(choice2!=0)
            {
            case 1:
                cout<<"Enter the value\n";
                cin>>no;
                obj1.InsertFirst(no);
            case 2:
                cout<<"Enter the value\n";
                cin>>no;
                obj1.InsertLast(no);
            case 3:
                 cout<<"Enter the value\n";
                cin>>no;
                cout<<"Enter the position\n";
                cin>>pos;
                obj1.InsertAtPos(no,pos);
            case 4:
                obj1.DeleteFirst();
            case 5:
                obj1.DeleteLast();
            case 6:
                cout<<"Enter the position\n";
                cin>>pos;
                obj1.DeleteAtPos();
            case 7:
                obj1.Display();
            case 8:
                obj1.Count();
            case 0:
                cout<<"thnx slll out\n";

            }
            }
        }
        else
        {
            while(choice2!=0)
            {
                cout<<"Enter your Choice :\n";
                cout<<"1:InsertFirst\n";
                cout<<"2:InsertLast\n";
                cout<<"3:InsertAtPosition\n";
                cout<<"4:DeleteFirst\n";
                cout<<"5:DeleteLast\n";
                cout<<"6:DeleteAtPosition\n";
                cout<<"7:Display\n";
                cout<<"8:Count\n";
                cin>>choice2;
                switch(choice)
                {
                   case 1:
                cout<<"Enter the value\n";
                cin>>no;
                obj2.InsertFirst(no);
            case 2:
                cout<<"Enter the value\n";
                cin>>no;
                obj2.InsertLast(no);
            case 3:
                 cout<<"Enter the value\n";
                cin>>no;
                cout<<"Enter the position\n";
                cin>>pos;
                obj2.InsertAtPos(no,pos);
            case 4:
                obj2.DeleteFirst();
            case 5:
                obj2.DeleteLast();
            case 6:
                cout<<"Enter the position\n";
                cin>>pos;
                obj2.DeleteAtPos();
            case 7:
                obj2.Display();
            case 8:
                obj2.Count();
            case 0:
                cout<<"thnx slll out\n";

                }

            }

    }
}
}
