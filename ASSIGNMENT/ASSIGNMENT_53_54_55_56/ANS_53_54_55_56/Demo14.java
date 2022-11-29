//d14


import java.lang.*;
import java.util.*;
class Digits14
{
	void ChkLastOcc(int arr[],int start,int end)
	{
		
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>start)&&(arr[i]<end))
			{
				System.out.println(arr[i]+" ");
				
			}
		}
		
		
	}
}
class Demo14
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Digits14 d = new Digits14();
		System.out.println("Enter the elements u gonna enter ");
		int size = s.nextInt();
		int arr[] = new int[size];
		for(int i =0;i<arr.length;i++)
		{
			arr[i]=s.nextInt();
		}
		System.out.println("Enter thestart");
		int istart = s.nextInt();
		System.out.println("Enter theEnd ");
		int iend = s.nextInt();
		d.ChkLastOcc(arr,istart,iend);
		

		
	}
}
