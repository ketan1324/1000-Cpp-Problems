//d16

import java.lang.*;
import java.util.*;

class Digits16
{
	int CountCap(String str)
	{
		int iCnt=0;
		char arr[] = str.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>='A')&&(arr[i]<='Z'))
			{
				iCnt++;
			}
		}
		return iCnt;	

	}
}
class Demo
{
	public static void main(String[] args) {
		Scanner sobj = new Scanner(System.in);
		Digits16 dobj = new Digits16();
		System.out.println("Enter the string");
		String str = sobj.nextLine();
		int ret = dobj.CountCap(str);
		System.out.println("Number of capital characters are :"+ret);
	}
}