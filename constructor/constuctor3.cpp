#include<iostream>
using namespace std;

class intg
{
	int m,n;
	public:
	intg(int,int);
	void display(void)
	{
		cout<<"m: "<<m<<endl;
		cout<<"n: "<<n<<endl;
	}
		
};

intg::intg(int x,int y)
{
	m=x;
	n=y;
}


int main()
{
	intg obj1(1,100);  //implicite
	intg obj2=intg(120,25);  //explicite
	
	obj1.display();
	obj2.display();
		
	
	return 0;
}

