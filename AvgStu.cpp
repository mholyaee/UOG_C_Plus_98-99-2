#include<iostream>
using namespace std;
int main(){
	
	int n,k,sumK=0;
	float g,sum=0,avg;
	cout<<"The number of Courses:";
	cin>>n;
	int i=1;
	while(i<=n)
	{
		cout<<"The "<<i<<"th grade is:";
		cin>>g>>k;
		sum+=g*k;
		sumK+=k;
		i++;
	}
	cout<<"The average is:"<<sum/sumK;
}
