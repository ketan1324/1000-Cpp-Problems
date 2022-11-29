//d591

import java.lang.*;
import java.util.*;
class Matrix
{
	void PrintPattern(String str)
	{
		char arr[] = str.toCharArray();
		for(int j=0;j<arr.length-1;j++)
		{
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+"  ");
		}
		System.out.println();
	    }
	}
}

class Demo591
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Matrix m = new Matrix();
		System.out.println("Enter the String");
		String str = s.nextLine();
		m.PrintPattern(str);


		
	}
}