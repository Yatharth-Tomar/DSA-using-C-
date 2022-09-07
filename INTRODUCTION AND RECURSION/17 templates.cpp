#include<stdio.h>
#include<iostream>
using namespace std;

template<class T>
class rectangle
{
	private:
		T length;
		T breadth;
	public:
		 rectangle(T l,T b)
		{
			length=l;
			breadth=b;
		}
		T getlength()
		{
			return breadth;
			return length;
		
		
		}
		
};
int main()
{
	rectangle<float> r(10.89,5.90);
	cout<<r.getlength();
	
}