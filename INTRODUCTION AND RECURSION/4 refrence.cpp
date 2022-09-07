#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int &r=a;//here we have to declare as well as initialize in one step otherwise it will show error
	r=500;
	
	
	cout<<r<<endl;
	cout<<a;
	
}