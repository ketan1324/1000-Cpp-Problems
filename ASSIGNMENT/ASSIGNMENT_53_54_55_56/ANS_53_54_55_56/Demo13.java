//d13

import java.lang.*;
import java.util.*;
class Digits13
{
	int ChkLastOcc(int arr[],int iValue)
	{
		int occ=-1;
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]==iValue)
			{
				occ=i;
				
			}
		}
		return occ;
		
	}
}
class Demo13
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Digits13 d = new Digits13();
		System.out.println("Enter the elements u gonna enter ");
		int size = s.nextInt();
		int arr[] = new int[size];
		for(int i =0;i<arr.length;i++)
		{
			arr[i]=s.nextInt();
		}
		System.out.println("Enter the Element whose occurance you want to search");
		int iValue = s.nextInt();
		int ret=d.ChkLastOcc(arr,iValue);
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
