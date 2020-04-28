#include<iostream>

using namespace std;
int Myfun(int a,int b)
{
	if(a>b)
		return a;
	return b;
}
int main()
{
	int x,y;
	cout<<"Enter 2 numbers:";
	cin>>x>>y;
	int t=Myfun(x,y);
	cout<<t;
	//cout<<Myfun(x,y);
}
