#include<stdio.h>
#include<iostream>
using namespace std;
struct rectangle
{
	int l,b;
};
struct rectangle *fun()
{
	struct rectangle *p;
	p=new rectangle;
	//p=(struct rectangle *)malloc(sizeof(struct rectangle));
	p->l=15;
	p->b=7;
	
	return p;
}
int main()
{
	struct rectangle *ptr=fun();
	cout<<ptr->l<<" "<<ptr->b;
}