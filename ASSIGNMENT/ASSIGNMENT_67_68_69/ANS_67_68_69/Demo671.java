import java.lang.*;
import java.util.*;
class Array
{
	int Diff(int arr[],int brr[])
	{
		int Sum1=0,Sum2=0;
		int a=arr.length;
		int b=brr.length;
		for (int i=0;i<a ;i++ ) {
			Sum1=Sum1+arr[i];
		}
		for (int i=0;i<b ;i++ ) {
			Sum2=Sum2+brr[i];
		}
		return Sum1-Sum2;
	}
}

class Demo671
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
		int ret=a.Diff(arr,brr);
		System.out.println("the difference between the two arrays is  "+ret);

	}
}