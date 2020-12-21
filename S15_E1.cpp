#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cout<<"Enter number:";
	cin>>n;
	if (n>=1&& n<=12){
	
	if (n==1)
	cout<<"Farvardin";
	if (n==2)
	cout<<"Ordibehesht";
	if (n==3)
	cout<<"Khordad";
	if(n==4)
	cout<<"Tir";
	if(n==5)
	cout<<"Mordad";
	if (n==6)
	cout<<"Shahrivar";
	if(n==7)
	cout<<"Mehr";
	if(n==8)
	cout<<"Aban";
	if (n==9)
	cout<<"Azar";
	if(n==10)
	cout<<"Dey";
	if (n==11)
	cout<<"Behman";
	if(n==12)
	cout<<"Esfand";
}
else
cout<<"The input is not valid!";
}
