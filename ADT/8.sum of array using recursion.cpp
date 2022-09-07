#include<stdio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int size;
	int length;
};

void display(struct array b)
{
	int i;
	for(i=0;i<b.length;i++)
	{
		printf("%d ",b.A[i]);
	}
}

int sum(int A[],int n)
{
	if(n<0)
	{
		return 0;
	}
	else
	return sum(A,n-1)+ A[n];
}

int main()
{
	struct array  a;
	printf("Enter size of array: ");
	scanf("%d",&a.size);
	
	a.A=(int*)malloc(a.size*sizeof(int));
	
	int i,n;
      
	
	printf("Enter numbe rof  enteries: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter value: ");
		scanf("%d",&a.A[i]);
	}
	a.length=n;
	//
	display(a);
	int b[3]={2,2,3};
	printf("\n%d",sum(a.A,a.length-1));
}
