//d7

import java.lang.*;
import java.util.*;
class Digits7
{
	int CheckOdd(int iDigit)
	{
		int iRem=0,iCnt=0;
		while(iDigit!=0)
		{
			iRem=iDigit%10;
			if(iRem%2!=0)
			{
				 iCnt++;
			}
			iDigit=iDigit/10;
		}
		return iCnt;
	}
}
class Demo7
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Digits7 d = new Digits7();

		System.out.println("Enter the Digit");
		int iDigit= s.nextInt();
		int ret=d.CheckOdd(iDigit); 
		System.out.println("number of odd digits are"+ret);

	}
}
