import java.lang.*;
import java.util.*;
class Digits17
{
	int CountSmall(String str)
	{
		int iCnt=0;
		char arr[] = str.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>='a')&&(arr[i]<='z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}
class Demo17
{
	public static void main(String[] args) {
		Scanner sobj = new Scanner(System.in);
		Digits17 dobj = new Digits17();
		System.out.println("Enter the sting");
		String str=sobj.nextLine();
		int ret = dobj.CountSmall(str);
		System.out.println("Number of small charactersa are "+ret);
	}
}