#include<iostream>
using namespace std;

int main()
{
	int i;
	cout<<"Enter a positive number:";
	cin>>i;
	
	int n;
	for(n=1;n<=10;++n)
	{	
		cout<<i<<"*"<<n<<"="<<i*n<<"\n";
	}
	
	
	
	
	return 0;
}

