#include<iostream>

using namespace std;
float Computing_Avg(int );
int main()
{
	int n;
	float avg;
	for(;;)
	{
		cout<<"\nNumber of courses:";
		cin>>n;
		if (n==0)break;
		avg=Computing_Avg(n);
		cout<<"\nThe average is:"<<avg<<"\n";
		if (avg>=17)
			cout<<"\n Top Student!!!";
	}
}
float Computing_Avg(int n)
{ float grade,SumG=0;
int k,SumK=0;
	
	for(int i=1;i<=n;i++)
	{
		cout<<"\nInput the grade & vahed:";
		cin>>grade>>k;
		SumG+=k*grade;
		SumK+=k;
		
	}
	return SumG/SumK;
}
