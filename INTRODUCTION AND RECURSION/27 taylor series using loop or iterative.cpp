#include<stdio.h>
double e(double x,double n)
{
	double s=1;
	for(n>0;n--;)
	{
		s=1+x/n*s;
	}
	return s;
}
int main()
{
	double x,n;
	printf("Enter x and n: ");
	scanf("%lf %lf",&x,&n);
	printf("%lf",e(x,n));
}