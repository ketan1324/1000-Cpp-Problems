import java.lang.*;
import java.util.*;
class Array
{
	void Diff(int arr[])
	{
		int a=arr.length;
		int iRem=0;
		for(int i=0;i<a;i++)
		{
			while(arr[i]!=0)
			{
				iRem=arr[i]%10;
				System.out.print(iRem);
				arr[i]=arr[i]/10;
				iRem=0;
			}
			System.out.println();

		}
		
	}
}

class Demo681
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