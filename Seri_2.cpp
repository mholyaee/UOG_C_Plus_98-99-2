#include<iostream>
using namespace std;

int main()

{

float i=1, Sum=0;
while(i<=98)
{
	Sum+=i/(i+1);
	i++;
}	
cout<<Sum;	
}
