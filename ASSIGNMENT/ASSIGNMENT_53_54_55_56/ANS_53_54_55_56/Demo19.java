//d19

import java.lang.*;
import java.util.*;
class Digits19
{
	boolean RetFreq(String str)
	{
		int iCnt=0;
		char arr[]= str.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]=='a')||(arr[i]=='a')||(arr[i]=='a')||(arr[i]=='a')||(arr[i]=='a')||(arr[i]=='a')||(arr[i]=='a')||(arr[i]=='a')||(arr[i]=='a')||(arr[i]=='a'))
			{
				return true;
			}
		}
		return false;
	}
}
class Demo19
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Digits19 d =new  Digits19();
		System.out.println("Enter the string");
		String str = s.nextLine();
		boolean bret = d.RetFreq(str);
		if(bret==true)
		{
			System.out.println("TRUE");
		}
		else if(bret==false)
		{
			System.out.println("FALSE");	
		}
		
	}
}