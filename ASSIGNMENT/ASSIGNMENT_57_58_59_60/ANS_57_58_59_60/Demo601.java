//d601

import java.lang.*;
import java.util.*;
class String 
{
	void StringS(String str1,String str2,int val )
	{
		 	/*char arr1[] = str1.toCharArray();
		 	char arr2[] = str2.toCharArray();
		 	for(int i=0;i<arr1.length;i++)
		 	{
		 		arr[i];
		 	}
		 	for(int j=0;j<val;j++)
		 	{

		 	}*/
		 	str1=str1+str2;
		 	System.out.print(str1);
	}
}  
class Demo601
{
	public static void main(String[] args) {
		Scanner sobj = new Scanner(System.in);
		String s = new String();
		System.out.println("Enter the first string");
		String str1 = sobj.nextLine();
		System.out.println("Enter the Second string");
		String str2 = sojb.nextLine();
		System.out.println("Enter the Character you want to concat");
		int val =sobj.nextInt();

		
		s.StringS(str1,str2,val);
	}
}