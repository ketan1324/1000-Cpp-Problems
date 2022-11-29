//d595

import java.lang.*;
import java.util.*;
class Matrix
{
	void PrintPattern(String str)
	{
		char arr[] = str.toCharArray();
		char arr1[] = str.toCharArray();
	    int size=arr.length;
	    int size2 = arr.length;
	    int qw=1;
	    for(int d=0;d<size2;d++)
	    {
	    	for(int c=0;c<qw;c++)
	    	{
	    		System.out.print(arr1[c]+"  ");
	    	}
	   		    System.out.println();
	   		    qw++;

	    }
	    for(int b=0;b<arr.length;b++)
	    {
	    for(int a=0;a<size;a++)
	    {
	    	System.out.print(arr[a]+ "  ");
	    }
	    System.out.println();
	    size--;
	    }
	    
	
	}
}

class Demo595
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Matrix m = new Matrix();
		System.out.println("Enter the String");
		String str = s.nextLine();
		m.PrintPattern(str);		
	}
}