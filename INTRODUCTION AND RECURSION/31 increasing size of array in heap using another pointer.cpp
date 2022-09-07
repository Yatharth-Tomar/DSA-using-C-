#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int *p;
	p=(int*)malloc(5*sizeof(int));
	for(i=0;i<5;i++)
	{
		printf("Enter value for p[%d]: ",i);
		scanf("%d",&p[i]);
	}
	int *q=(int*)malloc(10*sizeof(int));
	
	for(i=0;i<5;i++)
	{
		q[i]=p[i];
	}
	free(p); //see free position clearly
	p=q;
	q=NULL;
	
	for(i=0;i<5;i++)
	{
		printf(" %d ",p[i]);
		
	}
}