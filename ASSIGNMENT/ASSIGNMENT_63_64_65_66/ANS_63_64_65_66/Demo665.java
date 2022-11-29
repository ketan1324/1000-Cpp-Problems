import java.lang.*;
import java.util.*;
import java.lang.Math;
class Array
{
	void ArrayAdd(int arr[],int brr[])
	{
		int arrSum=0,brrSum=0;
		
		for(int i=0;i<arr.length;i++)
		{
			
			arrSum=arrSum+arr[i];
		}
		for(int i=0;i<brr.length;i++)
		{
			brrSum=brrSum+brr[i];
			
		}
		System.out.println("the addition of first array is "+arrSum);
		System.out.println();
		System.out.println("the addition of Second array is "+brrSum);
	} 
}

	
class Demo665
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
	
	a.ArrayAdd(arr,brr);
}
	
}