//d9

import java.lang.*;
import java.util.*;
class Digits9
{
	int Mult(int iDigit)
	{
		int iMult=1,iRem=0;
		while(iDigit!=0)
		{
		iRem=iDigit%10;
		if(iRem==0)
		{
			iRem=1;
		}
		iMult=iMult*iRem;
		iDigit=iDigit/10;	
		}
		
		return iMult;
	}
}
class Demo9
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Digits9 d = new Digits9();

		System.out.println("Enter the Digit");
		int iDigit= s.nextInt();
		int ret=d.Mult(iDigit); 
		System.out.println("Multiplication of the digits is "+ret);

	}
}
