import java.lang.*;
import java.util.*;
class Array
{
	void Diff(int arr[])
	{
		int a=arr.length;
		int iCnt=0;
		
		int crr[]=new int[a];
		for(int i=0;i<a;i++)
		{
			crr[i]=arr[a-1-i];
			System.out.println(crr[i]);
		}
		for(int i=0;i<a;i++)
		{
			if(arr[i]==crr[i])
			{
				iCnt++;
			}
		}
		if(iCnt==a)
		{
			System.out.println("True");
		}
		else
		{
			System.out.println("False");
		}
		
	}
}

class Demo675
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Array a = new Array();
		System.out.println("How many in 1st");
		int a1=s.nextInt();
		int arr[] = new int[a1];
		System.out.println("ENter in first");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=s.nextInt();
		}
		
		a.Diff(arr);
		

	}
}