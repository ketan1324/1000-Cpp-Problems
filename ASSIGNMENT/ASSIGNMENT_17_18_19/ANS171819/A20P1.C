/*
ASSIGNMENT NUMBER 20 IT IS IMPORTANT
PROBLEM SATEMENT : RETURN THE DISCOUNTED VALUE OF THE BILL
GIVEN CONDITIONS SEE
*/

/*
                            ALGORITHM
            START
                    take the value of the bill
                    store it in the variable
                    pass that value to the function
                    perform the required operation
                    return the final discounted value
            END
*/
#include<stdio.h>
#include<stdlib.h>
int  CalculateBill(int iValue)
{
    int  FinalBill=0;
    if(iValue<500)
    {
    FinalBill=iValue;
    }
        else if((iValue>500)&&(iValue<1500))
        {
            FinalBill=(iValue-(iValue*0.1));
        }
        else
        {
            FinalBill=(iValue-(iValue*0.15));
        }
        return FinalBill;
}
int main()
{
    int iValue=0;
    int  iRet=0;
    printf("enter the bill amount : ");
    scanf("%d",&iValue);
    iRet=CalculateBill(iValue);
    printf("the discounted Bill is %d",iRet);
    return 0;
}
