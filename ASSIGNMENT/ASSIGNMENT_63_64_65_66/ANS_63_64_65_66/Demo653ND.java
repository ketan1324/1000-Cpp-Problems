import java.lang.*;
import java.util.*;
import java.lang.Math;
class Matrix
{
	void Transpose(String str,int row,int col)
	{
		char arr[] = str.toCharArray();
		int q= row,jq=row;
		for (int i=0;i<row;i++ ) {
			for (int j=0;j<col ;j++ ) {
				
				for(int s=row-1;s>0;s--)
				{
					System.out.print("* ");
				}
				if(i+j==(row+1))
				{
					System.out.print("# ");		
				}
				else
				{
					System.out.print("@ ");
				}
			}
			System.out.println();
			jq--;
		}
		
		
		
	}
}
class Demo653
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