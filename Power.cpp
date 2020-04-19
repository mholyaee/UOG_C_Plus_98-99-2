#include<iostream>
using namespace std;

int main()
{
	int a,b,p=1;
	cout<<"Enter 2 numbers:";
	cin>>a>>b;
	if (a<b)
	{
		int temp=a;
		a=b;
		b=temp;
	}
	for(int i=1;i<=b;i++)
		p*=a;
	cout<<"The power:"<<p;
}
