#include<iostream>

using namespace std;
int Myfun(int ,int );
int main()
{
	int x,y,z,w;
	cout<<"Enter 4 numbers:";
	cin>>x>>y>>z>>w;
	int t=Myfun(x,y);
	int m=Myfun(z,w);
	cout<<Myfun(t,m);
	//cout<<t;
	//cout<<Myfun(x,y);
}
int Myfun(int a,int b)
{
	if(a>b)
		return a;
	return b;
}
