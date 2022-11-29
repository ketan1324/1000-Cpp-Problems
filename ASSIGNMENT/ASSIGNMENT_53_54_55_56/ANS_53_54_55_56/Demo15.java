//d15

import java.lang.*;
import java.util.*;
class Digits15
{
	int  ChkLastOcc(int arr[])
	{
		int iMult=1;
		
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]%2!=0)
			{
				iMult=iMult*arr[i];
				
			}
		}
		return iMult;
		
		
	}
}
class Demo15
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Digits15 d = new Digits15();
		System.out.println("Enter the elements u gonna enter ");
		int size = s.nextInt();
		int arr[] = new int[size];
		for(int i =0;i<arr.length;i++)
		{
			arr[i]=s.nextInt();
		}
		
		int ret=d.ChkLastOcc(arr);
		System.out.println("Multiplication if odd numbers is "+ret);
		

		
	}
}
