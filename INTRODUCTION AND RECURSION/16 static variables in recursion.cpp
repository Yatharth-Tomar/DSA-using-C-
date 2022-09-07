#include<stdio.h>
int fun(int n)
{
	static int x;
	if(n>0)
	{
		x++;//static variable
		
		return fun(n-1)+x;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a=5;
	printf("%d",fun(a));
}