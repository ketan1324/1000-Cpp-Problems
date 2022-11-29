import java.lang.*;
import java.util.*;
class Digits18
{
	int RetFreq(String str)
	{
		int iCnt=0;
		char arr[]= str.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>='a')&&(arr[i]<='z'))
			{
				iCnt++;
			}
			else if((arr[i]>='A')&&(arr[i]<='Z'))
			{
				iCnt--;
			}
		}
		return iCnt;
	}
}
class Demo18
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Digits18 d =new  Digits18();
		System.out.println("Enter the string");
		String str = s.nextLine();
		int ret = d.RetFreq(str);
		System.out.println("The difference between small letters and cap is "+ret);
	}
}