//d3
import java.lang.*;
import java.util.*;
class Digits3
{
	void EF(int arr[])
	{
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]%2==0)&&(arr[i]%5==0))
			{
				System.out.println("Numbers divisible by 2 and 5 are "+arr[i]);
			}
		}
	}
}
class Demo3
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Digits3 d = new Digits3();
		System.out.println("Enter the elements you want to enter ");
		int size = s.nextInt();
		int arr[] = new int[size];
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=s.nextInt();
		}
		d.EF(arr);
	}
}