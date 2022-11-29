//d5

import java.lang.*;
import java.util.*;
class Digits5
{
	void Eleven(int arr[])
	{
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]%11==0)
			{
				System.out.println("number is "+arr[i]);
			}
		}
	}
}
class Demo5
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Digits5 d = new Digits5();
		System.out.println("Enter the elements ");
		int size = s.nextInt();
		int arr[] = new int[size];
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=s.nextInt();
		}
		d.Eleven(arr);
	}
}