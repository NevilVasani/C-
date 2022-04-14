//fibonacci series

#include<iostream>
using namespace std;

int main()
{
	int n,f1=0,f2=1;
	
	cout<<"Enter a positive number:";
	cin>>n;
	
	int i,t;				//t = next term
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			cout<<f1<<",";
			continue;
		}
		
		if(i==2)
		{
			cout<<f2<<",";
			continue;
		}	
		t=f1+f2;
		f1=f2;
		f2=t;
		if(i<=n)		
		{
			cout<<t<<",";
		}
	}
	
	
	return 0;
}

