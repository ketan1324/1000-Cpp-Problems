import java.lang.*;
import java.util.*;
import java.lang.Math;
class Array
{
	void ContentCopy(int arr[],int brr[])
	{
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]%2==0)
			{
				System.out.println("First array elements are    "+arr[i]);
			}
			
		}
		for(int i=0;i<arr.length;i++)
		{
			if(brr[i]%2==0)
			{
				System.out.println("Second array elements are     "+brr[i]);
			}
			
		}
	} 
}

	
class Demo662
{
	public static void main(String[] args) {
	Scanner s =new Scanner(System.in);
	Array a = new Array();	
	System.out.println("how many elements you wwanna enter in FIRST array");
	int arr1 = s.nextInt();
	int arr[]= new int[arr1];	
	System.out.println("Enter the First array");
	for(int i=0;i<arr.length;i++)
	{
		arr[i]=s.nextInt();
	}
	System.out.println("how many elements you wwanna enter in SECOND array");
	int arr2 = s.nextInt();
	int brr[]= new int[arr2];
	System.out.println("Enter the Second array");
	for(int i=0;i<arr.length;i++)
	{
		brr[i]=s.nextInt();
	}
	a.ContentCopy(arr,brr);
	}
}