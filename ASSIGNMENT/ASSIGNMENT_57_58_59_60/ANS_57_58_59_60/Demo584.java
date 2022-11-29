//d584

import java.lang.*;
import java.util.*;
class Matrix
{
	void PrintPattern(int row,int col)
	{
		int no=1;
		int temp=col;
		for(int i=1;i<=row;i++)
		{
			for(int j=1;j<=col/2;j++)
			{
				System.out.print("*   #   ");					
			}
			System.out.println();
			temp=col;

			

		}
	}
}

class Demo584
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Matrix m = new Matrix();
		System.out.println("Enter the row");
		int row = s.nextInt();
		System.out.println("Enter the col");
		int col = s.nextInt();
		m.PrintPattern(row,col);


		
	}
}