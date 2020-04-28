#include<iostream>

using namespace std;

int Pal(int a)
{ int d,r=0,temp;
	temp=a;
	if (a>=0 && a<10)
		return 1;
	while(a>0)
	{
		d=a%10;
		r=r*10+d;
		a=a/10;
	}
	if(temp==r)
		return 1;
	return 0;
}
int main()
{ int a;
	for(;;)
	{
		cin>>a;
		if(a<0)break;
		int flag=Pal(a);
		if (flag==1)
			cout<<a<<"is Palindrome\n";
		
	}
}
