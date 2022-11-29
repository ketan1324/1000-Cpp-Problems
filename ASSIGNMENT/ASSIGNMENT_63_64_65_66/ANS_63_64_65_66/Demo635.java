import java.lang.*;
import java.util.*;
import java.lang.Math;
class Matrix
{
	void Transpose(int arr[][],int row,int col)
	{
		int iSumBorder=0;
		System.out.println("Your entered elements are :");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<row;j++)
			{
				System.out.print(arr[i][j]+"  ");
			}
			System.out.println();
		}
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				if((i==0)||(j==0)||(i==row-1)||(j==col-1))
				{
					iSumBorder=iSumBorder+arr[i][j];
				}
				
				System.out.println(iSumBorder);
			}
		
		}
		System.out.println("addition of bordered elements are "+iSumBorder);
		
	}
}
class Demo635
{
	public static void main(String[] args) {
		Scanner s =new Scanner(System.in);
		Matrix m = new Matrix();
		System.out.println("ENter the rows :");
		int row = s.nextInt();
		System.out.println("Enter the coloumns :");
		int col = s.nextInt();
		int arr[][]  =  new int[row][col];
		System.out.println("Enter the elements ");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				arr[i][j] = s.nextInt();
			}
		} 
		m.Transpose(arr,row,col);
	}
}