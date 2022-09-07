#include<iostream>
using namespace std;

class Arithametic
{
	private:
		int a;
		int b;
	public:
		Arithametic(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		
		int add()
		{
			int c;
			c=a+b;
			return c;
			
		}
		int sub()
		{
			int c;
			c=a-b;
			return c;
		}
};
int main()
{
	Arithametic ar(10,5);
	cout<<"Sum is "<<ar.add()<<endl;
	
}