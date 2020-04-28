#include<iostream>

using namespace std;

int fact(int n)
{	int F=1;
	for(int i=1;i<=n;i++)
		F*=i;
	return F;
}

int main()
{
	int n,k;
	cout<<"Input two measures:";
	cin>>n>>k;
	int n1=fact(n);
	int k1=fact(k);
	int dif=fact(n-k);
	cout<<n1/(dif*k1);
}
