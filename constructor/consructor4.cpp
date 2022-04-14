//default constractor
#include<iostream>
using namespace std;

class consractor
{
	
	
	public:int a,b;
	consractor()
	{
		
		 a=10;
	 	 b=20;
	}
};

int main()
{
	
	consractor c;   //consrator called
	cout<<"a="<<c.a<<endl;
	cout<<"b="<<c.b<<endl;
	
	return 0;
}

