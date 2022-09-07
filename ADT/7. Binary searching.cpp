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

int binarysearch(struct array m,int key)
{
	int l,mid,h;
	l=0;
	h=m.length-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key<m.A[mid])
		{
			h=mid-1;
		}
		else if(key==m.A[mid])
		{
			printf("%d found at index position %d",key,mid);
		break;
		
		
		}
		else
		{
			l=mid+1;
		}
	}
}

int RBinsearch(int a[],int l,int h,int key)
{
	int mid;
	if(l<=h)
	{
		mid=(l+h)/2;
		if(key==a[mid])
		return mid;
		else if(key<a[mid])
		return RBinsearch(a,mid-1,h,key);
		else
		return RBinsearch(a,mid+1,h,key);
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
	int key;
	printf("\n\nEnter value to be found: ");
	scanf("%d",&key);
	binarysearch(a,key);
	printf("%d",RBinsearch(a.A,0,a.length,key));
}
