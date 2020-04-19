#include<iostream>
using namespace std;

int main()
{
	int n,flag=0;

for(int n=100; n<1000;n++)
{
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		 flag=1;
		 break;
		}
	}
	if(flag==0)
		cout<<n<<"\t";
flag=0;
}
}
