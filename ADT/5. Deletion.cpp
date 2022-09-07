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

void delet(struct array *b,int add)
{
	int i;
	for(i=add+1;i<b->length;i++)
	{
		b->A[i-1]=b->A[i];
	}
	b->length--;
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
	display(a);
	int add;
	printf("Enter address of the value to be deleted: ");
	scanf("%d",&add);
	delet(&a,add);
		display(a);
}
