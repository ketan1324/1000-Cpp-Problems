//d6

/*
1.Write a java program which accept number from user and return the
count of even digits.
Input : 2395
Output : 1
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 4
*/

import java.lang.*;
import java.util.*;
class Digits6
{
	int CheckEven(int iDigit)
	{
		int iRem=0,iCnt=0;
		while(iDigit!=0)
		{
			iRem=iDigit%10;
			if(iRem%2==0)
			{
				 iCnt++;
			}
			iDigit=iDigit/10;
		}
		return iCnt;
	}
}
class Demo6
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Digits6 d = new Digits6();

		System.out.println("Enter the Digit");
		int iDigit= s.nextInt();
		int ret=d.CheckEven(iDigit); 
		System.out.println("number of even digits are"+ret);

	}
}






















