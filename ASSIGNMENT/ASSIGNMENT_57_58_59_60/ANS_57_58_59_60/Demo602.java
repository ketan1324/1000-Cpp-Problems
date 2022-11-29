//d602

import java.lang.*;
import java.util.*;
class StringS 
{
	void StringS(String str1,String str2,int val )
	{
		 	char arr1[] = str1.toCharArray();
		 	char arr2[] = str2.toCharArray();
		 	int i=0;
		 	String str20 ;
		 	/*while(arr1[i]<arr.length)
		 	{
		 		i++;
		 	}
		 	for(int j=0;j<val;j++)
		 	{
		 			arr1[i]=arr1[i]+arr2[j];
		 	}*/

		 	while(arr2[i]!=val)
		 	{

		 	char arr3[]
		 	}
		 	
		 	System.out.print(str1+str2);
	}
}  
class Demo602
{
	public static void main(String[] args) {
		Scanner sobj = new Scanner(System.in);
		StringS s = new StringS();
		System.out.println("Enter the first string");
		String str1 = sobj.nextLine();
		System.out.println("Enter the Second string");
		String str2 = sobj.nextLine();
		System.out.println("Enter the Character you want to concat");
		int val =sobj.nextInt();

		
		s.StringS(str1,str2,val);
	}
}