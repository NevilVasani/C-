#include<iostream>
using namespace std;

class sum
{
	private:int s=0,i,n;
	public:
		sum()
		{
			cout<<"Enter number:";
			cin>>n;
			for(i=0;i<=n;i++)
			{
				s+=i;
				cout<<"sum of first n numbers:"<<s<<endl;
			}
		}
		
		
};



int main()
{
	
	sum obj1;
	
	return 0;
}

