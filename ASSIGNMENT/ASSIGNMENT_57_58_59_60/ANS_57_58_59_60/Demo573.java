//d573

import java.lang.*;
import java.util.*;
class Matrix
{
	void PrintPattern(int row,int col)
	{
		char ch ='A';
		//int arr[][]= new int[row][col];
		for(int i=1;i<=col;i++)
		{
			for(int j=row;j>0;j--)
			{
				System.out.print(ch+" ");
				
			}
			System.out.println();
			ch++;			

		}
	}
}
class Demo573
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