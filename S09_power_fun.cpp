#include<iostream>

using namespace std;

int power(int a,int b)
{
	int temp=1;
	for(int i=1;i<=b;i++)
		temp*=a;
	return temp;
}
int main()
{
	int a,b;
	for(int i=1;i<=5;i++)
	{
	cin>>a>>b;
	if(a<b)
	{
		int t=a;
		a=b;
		b=t;
	}
	int P=power(a,b);
	cout<<P<<"\n";
}
}
