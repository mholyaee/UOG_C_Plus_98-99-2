#include<iostream>
using namespace std;

int main(){
	int n,c;
	float g,Max=0;
	cout<<"The number of students:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>g;
		if(g>Max)
		{
			Max=g;
			c=i;
		}
	}
	cout<<"The "<<c<<"th student has gained the Max grade which is:"<<Max;
	
}
