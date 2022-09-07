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
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}

void insert(struct array *a,int in_val)
{
	int i,add;
	printf("Enter position inserted: ");
	scanf("%d",&add);
	
	if(a->length<a->size)
	{
		for(i=a->length;i>add;i--)
		{
			a->A[i+1]=a->A[i];
		}
		
		a->A[add]=in_val;
		a->length++;
		
	
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
	int in_val;
	printf("Enter value to be inserted: ");
	scanf("%d",&in_val);
	insert(&arr, in_val);
	display(arr);
}

