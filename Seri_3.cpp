#include<iostream>
using namespace std;

int main()

{
int sgn=1;
float i=1, Sum=0;
while(i<=98)
{
	Sum+=i/(i+1)*sgn;
	i++;
	sgn*=(-1);
}	
cout<<Sum;	
}
