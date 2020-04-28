#include<iostream>
using namespace std;

float Income(int day, int wage)
{
	int S=day*wage;
	if (S<=1000)
		return S;
	else if(S<=2500)
		return S-0.15*S;
	else
		return S-0.25*S;
}
int main()
{
	int n,w,d;
	cout<<"\nNumber of employees:";
	cin>>n;
	cout<<"\nPayment per day:";
	cin>>w;
	for(int i=1;i<=n;i++)
	{
		cout<<"\nNumber of days:";
		cin>>d;
		cout<<Income(d,w)<<"\n";
	}

}
