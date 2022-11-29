import java.lang.*;
import java.util.*;
import java.lang.Math;
class Array
{
	void ArrayMerge(int arr[],int brr[],int c_length)
	{
		int crr[] = new int[c_length];
		for(int i=0;i<arr.length;i++)
		{
			crr[i]=arr[i];
			
		}
		for(int i=0;i<brr.length;i++)
		{
			crr[arr.length+i]=brr[i];
			
		}
		for(int i=0;i<crr.length;i++)
		{
			System.out.print("after merge"+crr[i]+"   ");
		}
	} 
}

	
class Demo664
{
	public static void main(String[] args) {
	Scanner s =new Scanner(System.in);
	Array a = new Array();	
	System.out.println("How many in 1st");
	int a1 = s.nextInt();
	int arr[]=new int[a1];
	for(int i=0;i<arr.length;i++)
	{
		arr[i]=s.nextInt();
	}
	System.out.println("How many in 2nd");
	int a2 = s.nextInt();
	int brr[]=new int[a2];
	for(int i=0;i<brr.length;i++)
	{
		brr[i]=s.nextInt();
	}
	int c_length = a1+a2;
	a.ArrayMerge(arr,brr,c_length);
}
	
}