import java.lang.*;
import java.util.*;
import java.lang.Math;
class Matrix
{
	
	void Transpose(int row,int col)
	{
		
		int q= row,jq=row;
		for (int i=1;i<=row;i++ ) {
			for (int j=2;j<=col ;j++ ) {
				
				if((i==1)||(j==2)||(i==row)||(j==col))
				{
					System.out.print("*  ");
				}
				else
				{
					System.out.print("   ");
				}
				if(i+j==(col+1))
				{
					System.out.print("*  ");
				}
				if((i==row)&&(j==col))
									{
					System.out.print("*  ");
				}




				
			}
			System.out.println();
		
		}
		
		
	}
}
class Demo653
{
	public static void main(String[] args) {
		Scanner s =new Scanner(System.in);
		Matrix m = new Matrix();

		
		System.out.println("ENter the rows :");
		int row = s.nextInt();
		System.out.println("Enter the coloumns :");
		int col = s.nextInt();
		
		
		m.Transpose(row,col);
	}
}