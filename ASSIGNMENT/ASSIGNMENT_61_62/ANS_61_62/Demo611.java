import java.lang.*;
import java.util.*;
class Matrix
{
	int SumDiagonal(int arr[][],int row,int col)
	{
		int iSum=0;

		System.out.println("The matrix is");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+"       ");
			}
			System.out.println();
		}
		for(int a=0;a<arr.length;a++)
		{
			for(int b=0;b<arr.length;b++)
			{
				if(a==b)
				{
					iSum=iSum+arr[a][b];
				}
			}
		}
		return iSum;
	}
}
class Demo611
{
	public static void main(String[] args) {
		Scanner sobj = new Scanner(System.in);
		Matrix mobj = new Matrix();
		System.out.println("Enter the number of rows");
		int row = sobj.nextInt();
		System.out.println("Enter the number of coloumns");
		int col = sobj.nextInt();
		int arr[][]  =new int[row][col];
		for(int i=0;i<arr.length;i++)
		{
			for(int j =0;j<arr[i].length;j++)
			{
				System.out.println("Enter the elements :");
				arr[i][j]=sobj.nextInt();
			}
		}
		int ret=mobj.SumDiagonal(arr,row,col);
		System.out.println("The addition of the dogopnal is "+ ret);
		
	}
}