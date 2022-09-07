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

void neg(struct array *a)
{
	int i=0,j=a->length-1;
	  int temp;
	while(i<j)
	{
		while(a->A[i]<0){i++;}
		while(a->A[j]>=0){j--;}
	  
	    if(i<j)
	    
	    {
	    	temp=a->A[i];
	    	a->A[i]=a->A[j];
	   		a->A[j]=temp;
	   		
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
	neg(&a);
	printf("\n");
	
	display(a);
	
}
