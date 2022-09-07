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

void search(struct array *a,int fin_val)
{
	if(a->length<a->size)
	{
		for(int i=0;i,a->length;i++)
		{
			if(a->A[i]==fin_val)
			{
				printf("Required value found at index %d",i);
			}
		}
	}
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
	int fin_val;
	printf("Enter the value to be search: ");
	scanf("%d",&fin_val);
	
	search(&a,fin_val);
}
