//d592

import java.lang.*;
import java.util.*;
class Matrix
{
	void PrintPattern(String str)
	{
		char arr[] = str.toCharArray();
		int size=arr.length
		for(int j=size;j>0;j--)
		{
		for(int i=0;i<size;i++)
		{
			System.out.print(arr[i]+"  ");


		}
		System.out.println();
		size--;

		
	    }
	}
}

class Demo592
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Matrix m = new Matrix();
		System.out.println("Enter the String");
		String str = s.nextLine();
		m.PrintPattern(str);


		
	}
}