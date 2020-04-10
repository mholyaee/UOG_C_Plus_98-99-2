#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<" Please input three numbers:";
	cin>>a>>b>>c;
	float temp;
	if (a>b)
	temp=a;
	else
	temp=b;
	if (temp<c)
	temp=c;
	
	cout<<"The max measure is:"<<temp;
	
}
