#include<iostream>
using namespace std;

int main()
{
	int n;
	long multi= 1.0;
	cout<<"Enter a positive number :";
	cin>>n;

	for(int i=1;i<=n;++i)
	{
		multi*=i;
	}
	
		
	cout<<n<<"! = "<<multi;	
	
	return 0;
}

