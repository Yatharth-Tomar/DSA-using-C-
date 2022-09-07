#include<stdio.h>
int sum(int p)
{
	if(p==0)
	{
		return 0;
	}
	else
	{
		return sum(p-1)+p;
	}
}
int main()
{
	int n;
	printf("Enter how many natural numbers you want to add: ");
	scanf("%d",&n);
	printf("%d",sum(n));
	
}