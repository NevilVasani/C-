//reverse number of input number. EX -> input=12345   output=54321

#include<iostream>
using namespace std;

int main()
{
	int n,reverse_num=0,reminder;
	
	cout<<"Enter a positive number:";
	cin>>n;
	
	while(n!=0)
	{
		reminder=n%10;
		reverse_num=reverse_num*10+reminder;
		n=n/10;					
	}
	
	cout<<reverse_num;
		return 0;
}


