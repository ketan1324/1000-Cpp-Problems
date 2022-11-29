import java.lang.*;
import java.util.*;
class Array
{
	void Diff(char arr[])
	{
		int a=arr.length,iCnt=0;
		int iSum=0,iRem=0;
		for(int i=0;i<a;i++)
		{
			if((arr[i]>='A')&&(arr[i]<='Z'))
			{
				iCnt++;
			}
		}
		System.out.println(" "+iCnt);
		
	}
}

class Demo684
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Array a = new Array();
		System.out.println("How many in 1st");
		int a1=s.nextInt();
		char  arr[] = new char[a1];
		System.out.println("ENter in first");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=s.next().charAt(0);
		}
		a.Diff(arr);
	}
}