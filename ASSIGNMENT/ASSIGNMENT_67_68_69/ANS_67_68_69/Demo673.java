import java.lang.*;
import java.util.*;
class Array
{
	void Diff(int arr[])
	{
		int i=0;
		int a=arr.length;
		int crr[] = new int[a];
		
		for (i=0;i<crr.length ;i++ ) {
			crr[i]=arr[a-1-i];
			System.out.print(crr[i]+"  ");
			
		}		
		
	}
}

class Demo673
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