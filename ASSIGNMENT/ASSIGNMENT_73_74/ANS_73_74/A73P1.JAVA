	import java.lang.*;
	import java.util.*;
	import java.util.Scanner;

class A73P1
{
	public static void main(String[] ar)
{
	Pattern2 ob = new Pattern2();
	ob.inputNum();
	ob.printAnswer();
}
private int num;
public void setNum(int num)
{
		this.num=num;
}
public int getNum()
{
		return this.num;
}
public void printAnswer()
{
				for(int i=1;i<=getNum();i++)
				{
				for(int j=1;j<=getNum()-i+1;j++)
				{
					System.out.println(" ");
				}
				for(int j=1;j<=i;j++)
				{
					System.out.println((char)(64+j)+" ");	
				}
				for(int j=1;j>=1;j--)
				{
					System.out.println((char)(64+j)+" ");	
				}
			}
		System.out.println();
		}
}



public void inputNum()
{
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter Number : ");
	int num = sc.nextInt();
	setNum(num);
}

