//d575

import java.lang.*;
import java.util.*;
class Matrix
{
	void PrintPattern(int row,int col)
	{
		int ih=;
		//int arr[][]= new int[row][col];
		for(int i=1;i<=row;i++)
		{
			for(int j=col;j>0;j--)
			{
				System.out.print();	
			}
			System.out.println();
		    ih--;
		}
	}
}
class Demo574
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