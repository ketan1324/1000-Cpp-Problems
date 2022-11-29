//d8

import java.lang.*;
import java.util.*;
class Digits8
{
	int Bet37(int iDigit)
	{
		int iRem=0,iCnt=0;
		while(iDigit!=0)
		{
			iRem=iDigit%10;
			if((iRem>3)&&(iRem<7))
			{
				 iCnt++;
			}
			iDigit=iDigit/10;
		}
		return iCnt;
	}
}
class Demo8
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Digits8 d = new Digits8();

		System.out.println("Enter the Digit");
		int iDigit= s.nextInt();
		int ret=d.Bet37(iDigit); 
		System.out.println("numbers between three and seven are "+ret);

	}
}
