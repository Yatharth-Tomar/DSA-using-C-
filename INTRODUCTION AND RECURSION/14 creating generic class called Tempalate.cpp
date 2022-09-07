#include<iostream>
using namespace std;

template<class T>
class Arithametic
{
	private:
		T a;
		T b;
	public:
		Arithametic(T a,T b)
		{
			this->a=a;
			this->b=b;
		}
		
		T add()
		{
			T c;
			c=a+b;
			return c;
			
		}
		T sub()
		{
			T c;
			c=a-b;
			return c;
		}
};
int main()
{
	Arithametic<int> ar(10,5);
	cout<<"Sum is "<<ar.add()<<endl;
	Arithametic<float> ar1(10.5,11.5);
	cout<<"Sum is "<<ar1.add()<<endl;
	
}