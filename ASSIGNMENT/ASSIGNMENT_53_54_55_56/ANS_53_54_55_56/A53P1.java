	import java.lang.*;
	import java.util.*;
	class Digits
	{
		int SumDiff(int arr[])
		{
		    int Es=0,Os=0;
			for(int i=0;i<arr.length;i++)
			{
				if(arr[i]%2==0)
				{
					 Es=Es+arr[i];
				}
				else
				{
					 Os=Os+arr[i];
				}
			}
			return Es-Os;
		}
	}
	 class Demo
	{
		public static void main(String[] args) 
		{
		    Scanner sobj=new Scanner(System.in);
			Digits dobj=new Digits();
			
			
			System.out.println("Enter the N Number");
			int size=sobj.nextInt();
			int Arr[]=new int[size];
			for(int i=0;i<Arr.length;i++)
			{
			    Arr[i]=sobj.nextInt();
			}
		
		
			
			int ret=dobj.SumDiff(Arr);
			System.out.println("the difference is "+ret);

			
		}
	}