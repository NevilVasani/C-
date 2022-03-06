//sum of n natural number

#include<iostream>
using namespace std;

int main()
{
	int n,sum;
	
	cout<<"enter one number:";
	cin>>n;
	
	int i;
	if(n>=0)
	{
	
		cout<<"sum=";
		for(i=1;i<=n;++i)
		{
			sum+=i;
			cout<<"+"<<i;
		}
		cout<<"="<<sum;
	}
	else
	{
		cout<<"please enter positive number!!!!!!!";
	}
	
	
	return 0;
}

