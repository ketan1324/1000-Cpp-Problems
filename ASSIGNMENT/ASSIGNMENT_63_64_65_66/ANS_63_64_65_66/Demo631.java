
import java.lang.*;
import java.util.*;
class Matrix
{
	void Swap(int arr[][],int row,int col)
	{
		for(int i=0;i<arr.length-1;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
		        int temp=arr[0][j];
		        arr[0][j]=arr[(i+1)][j];
		        
		        arr[i+1][j]=temp; 

		    }
		}
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
		        System.out.print(arr[i][j]+"   ");
		    }
		    System.out.println();
		}

	}
}
class Demo631
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
		
			
		
		System.out.println("Entered elements are:");
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
		 mobj.Swap(arr,row,col);
		
	}
}