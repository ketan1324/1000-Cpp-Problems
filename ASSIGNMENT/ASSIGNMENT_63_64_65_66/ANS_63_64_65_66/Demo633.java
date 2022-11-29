import java.lang.*;
import java.util.*;
class Matrix
{
	void Transpose(int arr[][],int row,int col)
	{
		int brr[][] = new int[row][col];
		System.out.println("Your entered elements are :");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<row;j++)
			{
				System.out.print(arr[i][j]+"  ");
			}
			System.out.println();
		}
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				brr[j][i]=arr[i][j];	
			}
		}
		System.out.println("transpose of the matrix is : :");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<row;j++)
			{
				System.out.print(brr[i][j]+"  ");
			}
			System.out.println();
		}
	}
}
class Demo633
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