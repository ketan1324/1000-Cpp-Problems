import java.lang.*;
import java.util.*;
class Digits
{
	int SumDiff(int arr[])
	{
		int e=0,o=0;
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]%2==0)
			{
				e=e+arr[i];
			}
			else
			{
				o=o+arr[i];
			}
		}
		return e-o;
	}
}
class Demo1
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		Digits dobj = new Digits();
		System.out.println("Enter the Elements ");
		int size = sobj.nextInt();
		int arr[] = new int[size];
		System.out.println("Enter the Elements in array");
		for(int i=0;i<size;i++)
		{
			arr[i]= sobj.nextInt();
		}
		int ret = dobj.SumDiff(arr);
		System.out.println("The difference is "+ret);

	}
}