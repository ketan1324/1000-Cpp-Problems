//d11

import java.lang.*;
import java.util.*;
class Digits11
{
	boolean ChkVal(int arr[],int iValue)
	{
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]==iValue)
			{
				
				return true;
			}
			
		}
		
			
				return false;
			
	}
}
class Demo11
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Digits11 d = new Digits11();
		System.out.println("Enter the Elements you gonna enter ");
		int size = s.nextInt();
		int arr[]=new int[size];
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=s.nextInt();
		}
		System.out.println("Enter the nu,ber you want to search ");
		int ivalue=s.nextInt();
		boolean bRet =d.ChkVal(arr,ivalue);
		if(bRet==true)
		{
			System.out.println(" element is present ");
		}
		else if(bRet==false)
		{
			System.out.println("Elements is not present");
		}

	}
}