import java.lang.*;
import java.util.*;
import java.lang.Math;
class Matrix
{
	void Transpose(int arr[][],int row,int col)
	{
		int iSumDiagonal=0,iSumAll=0;
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
				if(i==j)
				{
					iSumDiagonal=iSumDiagonal+arr[i][j];
				}
			}
		
		}
		System.out.println("the sum of digonal is "+iSumDiagonal);
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				
				
					iSumAll=iSumAll+arr[i][j];
				
			}
		
		}
		System.out.println("the sum of the all elements is "+iSumAll);
		 System.out.println(Math.sqrt(iSumAll)); 

	}
}
class Demo634
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