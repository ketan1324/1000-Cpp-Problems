import java.lang.*;
import java.util.*;
class Array
{
	void Diff(int arr[])
	{
		
		for (int i=0;i<arr.length ;i++ ) {
			while(arr[i]!=0)
			{
				System.out.print("*   ");
				arr[i]--;
			}
			System.out.println();
		}	
		
	}
}

class Demo695
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Array a = new Array();
		System.out.println("Enter the value");
		int val =s.nextInt();
		int  arr[] = new int[val];
		System.out.println("ENter in first");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=s.nextInt();
		}
		a.Diff(arr);
	}
}