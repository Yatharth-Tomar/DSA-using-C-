#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle
{
	int length;
	int breadth;
	char x;
};
int main()
{
	struct rectangle r1={10,5,'A'};//this is initiallizing
	cout<<sizeof(r1);//important size of function
	printf("%lu",sizeof(r1));
	cout<<endl;//we are getting 12 output instead of 9 because computer find its easy to read 4 bytes at times so for making its accesibility easy its allocating 4 bytes for each member so tota is 12 bytes
	//this it will take nearest bigger size ie integer in this case 
	//and this adjutment in the memory is called PADDING it make easily for processor to read entire structure at once
	
	cout<<r1.length<<endl<<r1.breadth<<endl<<r1.x;
	
}