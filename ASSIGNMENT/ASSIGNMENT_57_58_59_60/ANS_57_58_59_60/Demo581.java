//d581

import java.lang.*;
import java.util.*;
class Matrix
{
	void PrintPattern(int row,int col)
	{
		for(int i=1;i<=row;i++)
		{
			for(int j=1;j<=col;j++)
			{
				System.out.print("*  ");	
			}
			System.out.println();

		}
	}
}

class Demo581
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