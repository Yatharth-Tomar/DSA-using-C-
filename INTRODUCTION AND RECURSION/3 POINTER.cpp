#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct rectangle
{
	int l;
	int b;
};
int main()
{
	int *p1;//4 BYTES
	char *p2;//1 BYTE
	float *p3;//4 BYTES
	double *p4;//
	struct rectangle *p5;
	cout<<sizeof(p1)<<endl;
	cout<<sizeof(p2)<<endl;
	cout<<sizeof(p3)<<endl;
	cout<<sizeof(p4)<<endl;
	cout<<sizeof(p5)<<endl;
	
	//******POINTER MEMORY SIZE IS 8 IRRESPECTIVE OF THEIR DATA TYPES*****IMP**** 
}