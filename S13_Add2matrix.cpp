#include<iostream>
using namespace std;

int main()
{
	int a[5][5],b[5][5],c[5][5];
	cout<<"\nMartix1:\n";
	for(int i=0;i<5;i++)
	{
		cout<<"row"<<i+1<<":\n";
		for(int j=0;j<5;j++)
			{
				cin>>a[i][j];
			}
	}
	cout<<"\nMatrix2:\n";
	for(int i=0;i<5;i++)
	{
		cout<<"row"<<i+1<<":\n";
		for(int j=0;j<5;j++)
			{
				cin>>b[i][j];
			}
	}
	//Adding
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
	}
	cout<<"\nThe output:\n";
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
			{
				cout<<c[i][j]<<"\t";
			}
	cout<<"\n";
	}

}
