 #include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *p;
	p=&a;
	cout<<*p<<endl;
	printf("Address is %d %d ",p,&a);
	printf("\n");//we use * in front of variable for either declaration or defrencing meaning it will take the variable value whose addree it stores    
	
	//For Array

	int A[5]={1,2,3,4,5};
	p=A;//***here the syntax is that you dont have to use & when using pointer for array****IMP** or we can use p=&A[0];
	
		
	for(int i=0;i<5;i++)
	{
		cout<<p[i]<<endl;
	}
	//for heap memory allocation
    int *x;

	x=(int*)(malloc(5*sizeof(int)));
	x[0]=10,x[1]=11,x[2]=12,x[3]=13,x[4]=14;
//x=new int[5]; is another method for c++	
	for(int i=0;i<5;i++)
	{
		cout<<x[i]<<endl;
	}
	
	//for delete that memory
	delete [] x;//for c++ and for normal variable we should remove [] that are used specfically for arrays  
	free(x);//for c language
	
	
	
}
