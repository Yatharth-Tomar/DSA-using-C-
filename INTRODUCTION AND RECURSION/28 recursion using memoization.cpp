#include<stdio.h>
int A[100];
int f(int n)
{
	if(n<=1)
	{
		A[n]=n;
		return n;
	}
	else
	{
	
	 if(A[n-2]==-1)
    	{
		A[n-2]=f(n-2);
    	}
	 if(A[n-1]==-1)
	    {
		A[n-1]=f(n-1);
    	}


		return A[n-2]+A[n-1];
	}

	
	
}
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		A[i]=-1;
		
	}
	int n;
	printf("Enter range: ");
	scanf("%d",&n);
	printf("%d",f(n));
}