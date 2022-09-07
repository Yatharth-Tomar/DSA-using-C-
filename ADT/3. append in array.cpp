#include<stdio.h>
#include<stdlib.h>

struct array
{
	int *A;
	int size;
	int len;
	
};

void display(struct array a)
{
	int i;
	for(i=0;i<a.len;i++)
	{
		printf("%d ",a.A[i]);
	}
}

void append(struct array *b,int new_val)
{
	if(b->len<b->size)
	{
		b->A[b->len++]=new_val;
	}
}
int main()
{
	struct array a;
	printf("Enter size: ");
	scanf("%d",&a.size);
	
	a.A=(int*)malloc(a.size*sizeof(int));
	int n,i;
	printf("Enter number of entries:  ");
	scanf("%d",&n);
	
	a.len=n;
	
	for(i=0;i<n;i++)
	{
		printf("Enter value: ");
		scanf("%d",&a.A[i]);
		
	}
	display(a);
	int new_val;
	printf("Enter the value to be added: ");
	scanf("%d",&new_val);
	append(&a,new_val);;
	display(a);
}
