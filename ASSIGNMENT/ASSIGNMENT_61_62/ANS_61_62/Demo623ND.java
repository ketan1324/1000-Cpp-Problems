//d623

import java.lang.*;
import java.util.*;
class Matrix
{
	void RetFrequency(int arr[][],int row,int col)
	{
	
	
		for(int j=0;j<arr.length;j++)
		{
			for(int i=0;j<arr[j].length;i++)
			{
				int start=0,end=arr.length-1;
				int temp=arr[j][i];
				arr[j][i]=arr[j][arr.length-1];
				arr[j][arr.length-1]=temp;
			}		
			
		}
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+"  ");
				
				
			}		
			System.out.println();	
		}
			
	}
	
}
class Demo623
{
	public static void main(String[] args) {
		Scanner sobj = new Scanner(System.in);
		Matrix mobj = new Matrix();
		System.out.println("Enter the row");
		int row = sobj.nextInt();
		System.out.println("Enter the col");
		int col = sobj.nextInt();
		int arr[][]=new int[row][col];
		int brr[][]= new int[row][col];
		System.out.println("ENter the elements");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				arr[i][j] = sobj.nextInt();
			}
		}
		System.out.println("You entered elements are");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]);
			}
					System.out.println();

			
		}
		System.out.println();
		System.out.println("--");
		 mobj.RetFrequency(arr,row,col);
		
	}
}