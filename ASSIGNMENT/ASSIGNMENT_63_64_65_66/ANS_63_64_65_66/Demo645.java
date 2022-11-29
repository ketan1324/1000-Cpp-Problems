import java.lang.*;
import java.util.*;
import java.lang.Math;
class Matrix
{
	void Transpose(String str,int row,int col)
	{
		char arr[] = str.toCharArray();
		int q= row,jq=1;
		for (int i=1;i<row ;i++ ) {
			for (int j=0;j<col ;j++ ) {
				if(j<jq)
				{
					System.out.print(arr[j]+"  ");
				}
				else
				{
					System.out.print("#  ");
				}
			}
			System.out.println();
			jq++;
		}
		for (int i=0;i<row ;i++ ) {
			for (int j=0;j<col ;j++ ) {
				if(j<q)
				{
					System.out.print(arr[j]+"  ");
				}
				else
				{
					System.out.print("#  ");
				}

			}
			System.out.println();
			q--;
			
		}
		
		
	}
}
class Demo645
{
	public static void main(String[] args) {
		Scanner s =new Scanner(System.in);
		Matrix m = new Matrix();

		System.out.println("Enter the String ");
		String str = s.nextLine();
		System.out.println("ENter the rows :");
		int row = s.nextInt();
		System.out.println("Enter the coloumns :");
		int col = s.nextInt();
		
		
		m.Transpose(str,row,col);
	}
}