#include<iostream>
using namespace std;

int main()
{
	int a[5][5];
	cout<<"\nEnter elements\n";
	for(int i=0;i<5;i++)
	{
		cout<<"row"<<i+1<<":\n";
		for(int j=0;j<5;j++)
			{
				cin>>a[i][j];
			}
	}
	
	cout<<"\nThe output:\n";
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
			{
				cout<<a[i][j]<<"\t";
			}
	cout<<"\n";
	}
	
	// lower Triangular
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<=i;j++)
		cout<<a[i][j]<<"\t";
		
		cout<<"\n";
	}
	
}
