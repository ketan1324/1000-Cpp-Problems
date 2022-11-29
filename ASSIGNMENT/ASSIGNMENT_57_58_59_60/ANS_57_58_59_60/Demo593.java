//d593

import java.lang.*;
import java.util.*;
class Matrix
{
	void PrintPattern(String str)
	{
		char arr[] = str.toCharArray();
		int size=arr.length;
		int qw=1;
		for(int j=0;j<size;j++)
		{
		for(int i=0;i<qw;i++)
		{
			System.out.print(arr[i]+"  ");
		}
		System.out.println();
		qw++;
	    	}
	
	}
}

class Demo593
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Matrix m = new Matrix();
		System.out.println("Enter the String");
		String str = s.nextLine();
		m.PrintPattern(str);


		
	}
}