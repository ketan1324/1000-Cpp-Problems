import java.lang.*;
import java.util.*;
class Array
{
	void Diff(char arr[],char cChar)
	{
		
		char temp='\0';
		int iCnt=0;
		for(int i=0;i<arr.length;i++)
		{

				if((arr[i]==cChar)||(arr[i]+32==cChar)||(arr[i]-32==cChar))
				{
					iCnt++;
				}
				
			
		}

System.out.println(iCnt);		
		
	}
}

class Demo693
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Array a = new Array();
		System.out.println("How many in 1st");
		int a1=s.nextInt();
		char arr[] = new char[a1];
		System.out.println("ENter in first");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=s.next().charAt(0);
		}
		System.out.println("Enter the Character");
		char val=s.next().charAt(0);
		a.Diff(arr,val);
	}
}