//d612 
import java.lang.*;
import java.util.*;
class Matrix
{
	int RetFrequency(int arr[][],int row,int col,int val)
	{
		int iCnt=0;
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				if(arr[i][j]==val)
				{
					iCnt++;
				}
			}
		}
		return iCnt;
	}
}
class Demo612
{
	public static void main(String[] args) {
		Scanner sobj = new Scanner(System.in);
		Matrix mobj = new Matrix();
		System.out.println("Enter the row");
		int row = sobj.nextInt();
		System.out.println("Enter the col");
		int col = sobj.nextInt();
		System.out.println("Enter the number you want to find frequeuency");
		int val = sobj.nextInt();
		int arr[][]=new int[row][col];
		System.out.println("ENter the elements");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				arr[i][j] = sobj.nextInt();
			}
		}
		int ret= mobj.RetFrequency(arr,row,col,val);
		System.out.println("the frequency of the number is"+ret);
	}
}