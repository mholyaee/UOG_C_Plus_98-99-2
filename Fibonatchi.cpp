#include<iostream>
using namespace std;

int main()
{
	int a,b,c,n;
	cout<<"Input N:";
	cin>>n;
	a=1;
	b=1;
	cout<<a<<"\t"<<b<<"\t";
	for(int i=3;i<=n;i++)
		{
			c=a+b;
			cout<<c<<"\t";
			a=b;
			b=c;
		}
}
