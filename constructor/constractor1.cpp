#include<iostream>
using namespace std;



class ABC
{
	public:
		ABC(){
			cout<<"Consractor calld automatically"<<endl;
		}
	void call()
	{
		cout<<"this is call function"<<endl;
		
		}	
};


	

int main()
{
	ABC obj1;  //consuctor called
	
	obj1.call();

	
	return 0;
}

