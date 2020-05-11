#include<iostream>
using namespace std;

//Quiz4
int main()
{
	float list[10];
	int i,count=0;
	float avg,grade,sum=0;
	for(i=0;i<10;i++)
	{
		cin>>list[i];
		sum+=list[i];
	}
	avg=sum/10;
	for(i=0;i<10;i++)
		if(avg<=list[i])
			count++;
	cout<<"\nAverage is:"<<avg;
	cout<<"\nNumber of Top students:"<<count;
	
}
