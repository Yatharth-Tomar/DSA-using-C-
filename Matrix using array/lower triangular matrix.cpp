#include<stdio.h>
#include<stdlib.h>

struct matrix
{
	int *A;
	int n;
};
void set(struct matrix *m,int i,int j,int num)
{
	if(i>=j)
	m->A[( i * (i - 1) / 2) + (j - 1)]=num;
}

void display(struct matrix m)
{
	int i,j;
	for(i=1;i<=m.n;i++)
	{
		for(j=1;j<=m.n;j++)
		{
			if(i>=j)
			{
				printf(" %d ",	m.A[( i * (i - 1) / 2) + (j - 1)]);
			}
			else
			printf(" 0 ");
		}
		printf("\n");
	}
}
int main()
{
	struct matrix m;
	int i,j,num;
	m.A=(int *)malloc(m.n*(m.n+1)/2 *sizeof(int));
	scanf("%d",&m.n);
	for(i=1;i<=m.n;i++)
	{
		for(j=1;j<=m.n;j++)
		{
			printf("Enter value for %d %d: ",i,j);
			scanf("%d",&num);
			set(&m,i,j,num);
		}
	}
	
	display(m);
	
}
