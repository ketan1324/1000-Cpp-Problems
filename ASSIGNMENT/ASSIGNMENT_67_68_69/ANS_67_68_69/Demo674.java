import java.lang.*;
import java.util.*;
class Array
{
	int  Diff(int arr[],int brr[])
	{
		int a=arr.length,b=brr.length;
		int c=a+b;
		int crr[]=new int[c];
		for(int i=0;i<a;i++)
		{
			crr[i]=arr[i];
		}
		for(int i=0;i<b;i++)
		{
			crr[a+i]=brr[i];
		}
		/*for(int i=0;i<crr.length;i++)
		{
			System.out.print(crr[i]+"  ");
		}*/
		
		return 	crr;
		
	}
}

class Demo674
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
		System.out.println("ENter in Second");
		for(int i=0;i<arr.length;i++)
		{
			brr[i]=s.nextInt();
		}
		int c=a1+a2;
		int ret=a.Diff(arr,brr);
		for(int i=0;i<c;i++)
		{
		System.out.println("  "+crr[i]);	
		}
		
		

	}
}