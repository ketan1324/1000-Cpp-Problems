//d4

import java.lang.*;
import java.util.*;
class Digits4
{
	void TF(int arr[])
	{
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]%3==0)&&(arr[i]%5==0))
			{
				System.out.println("numbers are "+arr[i]);
			}
		}
	}
}
class Demo4
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Digits4 d = new Digits4();
		System.out.println("Enter the elements ");
		int size = s.nextInt();
		int arr[]=new int[size];
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=s.nextInt();
		} 
		d.TF(arr);
	}
}