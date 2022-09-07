#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	int *A[3];
	A[0]=(int*)malloc(3*sizeof(int));
	A[1]=(int*)malloc(3*sizeof(int));
	A[2]=(int*)malloc(3*sizeof(int));
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value for A[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("A[%d][%d]=%d",i,j,A[i][j]);
			printf("\n");
		}
	}
	

	
	// all memory in heap
	
	int **B;
	B=(int**)malloc(3*sizeof(int));//important note this step
	B[0]=(int*)malloc(3*sizeof(int));
	B[1]=(int*)malloc(3*sizeof(int));
	B[2]=(int*)malloc(3*sizeof(int));
	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value for B[%d][%d]: ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("B[%d][%d]=%d",i,j,B[i][j]);
			printf("\n");
		}
	}
}