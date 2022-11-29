import java.lang.*;
import java.util.*;

class Digits2
{
	void DivByFive(int arr[])
	{
		for(int i=0;i<arr.length;i++ )
		{
			if(arr[i]%5==0)
			{
				System.out.println("Number Divisible by five are "+arr[i]);
			}
		}
	}
}
class Demo2
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		Digits2 dobj = new Digits2();
		System.out.println("Enter the number of elements you are going to enter ");
		int size = sobj.nextInt();
		int arr[] = new int[size];
		System.out.println("Enter the number of elements  ");

		for(int i=0;i<size;i++)
		{
			arr[i]=sobj.nextInt();
		}
		dobj.DivByFive(arr);

	}
}
