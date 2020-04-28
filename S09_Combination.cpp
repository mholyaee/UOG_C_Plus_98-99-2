#include<iostream>

using namespace std;

int main()
{
	int n,k,n1=1,k1=1,dif=1;
	cout<<"Input two measures:";
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		n1*=i;
	for(int i=1;i<=k;i++)
		k1*=i;
	for(int i=1;i<=n-k;i++)
		dif*=i;
	cout<<n1/(dif*k1);
}
