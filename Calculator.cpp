#include<iostream>
using namespace std;
int main()
{
	float a,b;
	char op;
	while(true){
		cout<<"\nThe op:";
		cin>>op;
		cout<<"\nYour numbers:";
		cin>>a>>b;
		if(op=='+')
			cout<<a+b;
		else if(op=='-')
			cout<<a-b;
		else if(op=='*')
			cout<<a*b;
		else if(op=='/')
		{
			if(b!=0)
				cout<<a/b;
			else
				cout<<"Your inputs are not valid";
		}
		else
		   break;
		cout<<"\n";
 }
}

