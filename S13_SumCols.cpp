#include<iostream>
using namespace std;

int main()
{
	int arr[3][5];
	for(int i=0;i<3;i++)
	{
		cout<<"row"<<i+1<<":\n";
		for(int j=0;j<5;j++)
			{
				cin>>arr[i][j];
			}
	}
	cout<<"\nThe output:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
			{
				cout<<arr[i][j]<<"\t";
			}
	cout<<"\n";
	}
	int sum[5]={0};
	for(int j=0;j<5;j++)
	{
		for(int i=0;i<3;i++)
			{
				sum[j]+=arr[i][j];
			}
	}
	for(int i=0;i<5;i++)
	cout<<"\n"<<sum[i];
}
