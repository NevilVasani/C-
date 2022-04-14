//consuctor called

#include<iostream>
using namespace std;

class z
{
	public:
		z(){
			cout<<"consuctor called"<<endl;
		}
		
		~z(){
			cout<<"distuctor called"<<endl;
		}
};

int main()
{
	z z1;  //consuctor called
	int i=1;
	
	if(i==1)
	{
		z z2;  //cosuctor called
	}  //destudtor called
	
	return 0;
	
}  //destuctor called

