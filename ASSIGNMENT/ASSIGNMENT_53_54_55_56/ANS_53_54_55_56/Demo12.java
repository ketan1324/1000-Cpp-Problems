//d12

import java.lang.*;
import java.util.*;
class Digits12
{
	int ChkOcc(int arr[],int iValue)
	{
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]==iValue)
			{
				return i;
			}
		}
		return -1;
	}
}
class Demo12
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Digits12 d = new Digits12();
		System.out.println("Enter the elements u gonna enter ");
		int size = s.nextInt();
		int arr[] = new int[size];
		for(int i =0;i<arr.length;i++)
		{
			arr[i]=s.nextInt();
		}
		System.out.println("Enter the Element whose occurance you want to search");
		int iValue = s.nextInt();
		int ret=d.ChkOcc(arr,iValue);
		if(ret==-1)
		{
			System.out.println("there is no such Number in the array");	
		}
		else
		{
			System.out.println("the position of the elements is    "+ret);	
		}
		
	}
}
