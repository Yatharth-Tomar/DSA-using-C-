#include<stdio.h>
double e(double x,double n)
{
	static double s=1;
	if(n==0)
	return s;
	else
	s=1+x/n*s;
	return e(x,n-1);
}
int main()
{
	double x,n;
	printf("Enter x and n: ");
	scanf("%lf %lf",&x,&n);
	printf("%lf",e(x,n));
}