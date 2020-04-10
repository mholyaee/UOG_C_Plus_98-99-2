#include<iostream>
using namespace std;
int main ()
{
	float a,b;
	cout<<"input the measures:";
	cin>>a>>b;
	if (a>0 && b>0)
	cout<<"The area is:"<<a*b;
	else
	cout<<"The measures are not valid!";
	
}
