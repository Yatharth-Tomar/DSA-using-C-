#include<stdio.h>


void fun(int n)
{
	if(n>0)
	{
		fun(n-1);
		printf("%d",n);
		printf("\n");
	
	}
	
}
int main()
{
	int a=3;
	fun(a);
	return 0;
	
}
