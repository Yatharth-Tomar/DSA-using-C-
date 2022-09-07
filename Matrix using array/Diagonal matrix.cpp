#include<stdio.h>
struct matrix
{
	int A[10];
	int n;//dimension of square matrix
};
void set(struct matrix *m,int i,int j,int num)
{
	if(i==j)
	{
		m->A[i-1]=num;
	}
}
int get(struct matrix *m,int i,int j)
{
	if(i==j)
	{
		return m->A[i-1];
	}
}
void display(struct matrix m)
{
	int i,j;
	printf("\n");
	for(i=0;i<m.n;i++)
	{
		for(j=0;j<m.n;j++)
		{
			if(i==j)
			{
				printf(" %d ",m.A[i]);
			}
			else
			{
				printf(" 0 ");
			}
			
		}
		printf("\n");
	}
}
int main()
{
	struct matrix m;
	int i,j;
	m.n=4;
	set(&m,1,1,11);
	set(&m,2,2,12);
	set(&m,3,3,13);
	set(&m,4,4,14);
	int element=get(&m,3,3);
	printf("\n Found element is %d",element);
	display(m);
}
