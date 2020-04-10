#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age:";
	cin>>age;
	if (age>=18)
		cout<<"You can participate in the election";
	else
		cout<<"your age is:"<<age<<" which is <18; So you cant!!";
	
}
