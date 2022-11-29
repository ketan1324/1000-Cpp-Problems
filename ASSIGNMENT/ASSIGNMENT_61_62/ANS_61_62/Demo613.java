//d613
import java.lang.*;
import java.util.*;
class Matrix
{
	int RetFrequency(int arr[][],int row,int col)
	{
		int iCnt=0,mD=0,rD=0;
		int iMax1=0;
		int iMax2=0;
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				if(i==j)
				{
					if(arr[i][j]>iMax1)
					{
						iMax1=arr[i][j];

					}
				}
				if((i+j)==col+1)
				{
					if(arr[i][j]>iMax2)
					{
						iMax2=arr[i][j];
						System.out.println(iMax2);
					}

				}

			}			
			    if(iMax1>iMax2)
		        {
			             return iMax1;
		   	    }

		}
			return iMax2;
	}
	
}
class Demo613	
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
		int ret= mobj.RetFrequency(arr,row,col);
		System.out.println("the largest number is" +ret);
	}
}