//d10

import java.lang.*;
import java.util.*;
class Digits10
{
	int CountDiff(int iDigit)
	{
		int e=0,o=0,irem=0;
		while(iDigit!=0)
		{
			irem=iDigit%10;
			if(irem%2==0)
			{
				e=e+irem;
			}
			else
			{
				o=o+irem;
			}
			iDigit=iDigit/10;
		}
		return e-o;
	}
}
class Demo10
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Digits10 d = new Digits10();
		System.out.println("Enter the elements ");
		int iValue=s.nextInt();
		
		
		int ret=d.CountDiff(iValue);
		System.out.println("Difference is "+ret);

	}
}