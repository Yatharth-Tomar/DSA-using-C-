#include<stdio.h>
int pow(int m,int n)
{
	if(n==0)
	return 1;
	if(n%2==0)
	return pow(m*m,n/2);
	else
	return m*pow(m*m,n/2);
}
int main()
{
	int m,n;
	printf("Enter base: ");
	scanf("%d",&m);
	printf("Enter power: ");
	scanf("%d",&n);
	printf("%d",pow(m,n));
	
}