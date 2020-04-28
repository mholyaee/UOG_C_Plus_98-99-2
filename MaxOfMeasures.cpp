#include<iostream>

using namespace std;
int Myfun(int ,int );
int main()
{int x,max=0;
	while (true)
	{
		cout<<"Number:";
		cin>>x;
		if (x<=0)
			break;
		max=Myfun(x,max);
	}
	cout<<"\nThe max measure:"<<max;
}
int Myfun(int a,int b)
{
	if(a>b)
		return a;
	return b;
}
