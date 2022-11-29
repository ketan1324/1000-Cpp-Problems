import java.lang.*;
import java.util.*;
class Array
{
	void Diff(int arr[],int brr[])
	{
		int Min1=arr[0],Min2=brr[0];
		int a=arr.length;
		int b=brr.length;
		for (int i=0;i<a ;i++ ) {
			if(arr[i]<Min1)
			{
				Min1=arr[i];
			}
			
		}
		System.out.println("  hi"+Min1);
		for (int i=0;i<b ;i++ ) {
			if(brr[i]<Min2)
			{
				Min2=arr[i];
			}
			
		}
		System.out.println(Min2);
		
	}
}

class Demo672
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
		System.out.println("How many in 2nd");
		int a2=s.nextInt();
		int brr[] = new int[a2];
		System.out.println("ENter in second");
		for(int i=0;i<brr.length;i++)
		{
			brr[i]=s.nextInt();
		}
		a.Diff(arr,brr);
		

	}
}