#include<stdio.h>
#include<iostream>
using namespace std;

struct rectangle
{
	int l,b;
};
void fun(struct rectangle *p)
{
	p->l=20;
	p->b=10;
}
int main()
{
	struct rectangle r={5,4};
	cout<<"Before change "<<r.l<<" "<<r.b<<endl;
	fun(&r);
	cout<<"After change "<<r.l<<" "<<r.b;
	
}