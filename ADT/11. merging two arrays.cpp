#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[6]={11,12,13,14,15,16};
	int c[20];
	int i=0,j=0,k=0;
	while(i<10&&j<6)
	{
		if(a[i]<b[j])
		c[k++]=a[i++];
		else
		c[k++]=b[j++];
	}
	for(;i<10;i++)
	{
		c[k++]=a[i];
	}
	for(;j<6;j++)
	{
		c[k++]=b[j];
	}
	
	for(k=0;k<16;k++)
	{
		printf("%d ",c[k]);
	}
}

