//d582

import java.lang.*;
import java.util.*;
class Matrix
{
	void PrintPattern(int row,int col)
	{
		int no=1;
		for(int i=1;i<=row;i++)
		{
			for(int j=1;j<=col;j++)
			{
				System.out.print(no+" ");
				no++;	
			}
			System.out.println();
			no=1;

		}
	}
}

class Demo582
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