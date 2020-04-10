#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Please enter a number:";
	cin>>a;
	if (a<0)
	//a=a*(-1);
	a=-a;
	cout<<"The abs value is:"<<a;
}
