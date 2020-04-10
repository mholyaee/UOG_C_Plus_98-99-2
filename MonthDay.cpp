#include<iostream>
using namespace std;

int main()
{
	int n,m,d;
	cout<<"Give the number of day:";
	cin>>n;
	if (n<=186)//31*6
	{
		m=n/31;
		m++;
		d=n%31;
	}
	else 
	{
		n-=186;
		m=n/30;
		d=n%30;
		m+=7;
	}
	cout<<"Number of Month:"<<m<<"\n"<<"Number of Day:"<<d;
}
