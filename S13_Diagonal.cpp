#include<iostream>
using namespace std;

int main()
{
	int a[5][5];
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
// Main diagonal
	cout<<"\nThe Main diagonal:\n";
	for(int i=0;i<5;i++)
	{

				cout<<a[i][i]<<"\t";
	}

// Anti-diagonal
	cout<<"\nThe Anti-diagonal:\n";
	for(int i=0;i<5;i++)
	{

				cout<<a[i][4-i]<<"\t";
	}
}

