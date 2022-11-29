//d614
import java.lang.*;
import java.util.*;
class Matrix
{
	void RetFrequency(int arr[][],int row,int col)
	{
		int iSum=0;
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				iSum=iSum+arr[j][i];
				
			}		
			System.out.print(iSum+"  ");	
			 			
			 			iSum=0;

		}
			
	}
	
}
class Demo614
{
	public static void main(String[] args) {
		Scanner sobj = new Scanner(System.in);
		Matrix mobj = new Matrix();
		System.out.println("Enter the row");
		int row = sobj.nextInt();
		System.out.println("Enter the col");
		int col = sobj.nextInt();
		int arr[][]=new int[row][col];
		System.out.println("ENter the elements");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				arr[i][j] = sobj.nextInt();
			}
		}
		System.out.println("You entered elements are");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]);
			}
					System.out.println();

			
		}
		System.out.println();
		System.out.println("--");
		 mobj.RetFrequency(arr,row,col);
		
	}
}