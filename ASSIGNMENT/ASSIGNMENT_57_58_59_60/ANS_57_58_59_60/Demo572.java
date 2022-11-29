//d572

import java.lang.*;
import java.util.*;
class Matrix
{
	void PrintPattern(int row,int col)
	{
		char ch ='A';
		char ch1='a';
		//int arr[][]= new int[row][col];
		for(int i=1;i<=row/2;i++)
		{
			for(int j=col;j>0;j--)
			{
				System.out.print(ch+" ");
				ch++;
			}
			System.out.println();
			for(int k=col;k>0;k--)
			{
				System.out.print(ch1+" ");
			    ch1++;

			}	
				
			
			ch ='A';
			ch1='a';
			System.out.println();
			
			
			

		}
	}
}
class Demo572
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Matrix m = new Matrix();
		System.out.println("Enter the row ");
		int row = s.nextInt();
		System.out.println("Enter the col ");
		int col = s.nextInt();
		m.PrintPattern(row,col);
	}
}