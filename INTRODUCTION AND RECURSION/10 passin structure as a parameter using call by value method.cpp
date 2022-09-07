#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle
{
	int l,b;
};
void fun(struct rectangle e)
{
	cout<<e.l<<" "<<e.b;
}
int main()
{
	struct rectangle r={5,4};
	cout<<r.l<<" "<<r.b<<endl;
	fun(r);//passing structure variable as parameter
	
}