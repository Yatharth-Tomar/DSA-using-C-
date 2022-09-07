#include<stdio.h>
#include<stdlib.h>
struct array
{
	int *A;
	int size;
	int length;
};

void display(struct array arr)
{
	int i,n;
	for(i=1;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}
int main()
{
	struct array arr;
	printf("Enter size of array: ");
	scanf("%d",&arr.size);
	
	arr.A=(int*)malloc(arr.size*sizeof(int));
	arr.length=0;
	
	int n,i;
	printf("Enter number of enteries: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	arr.length=n;
	display(arr);
}

