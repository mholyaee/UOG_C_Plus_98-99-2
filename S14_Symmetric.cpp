#include<iostream>
using namespace std;
int sym(int [][5],int );
int main()
{
	int s[5][5];
	for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
		cin>>s[i][j];
		//showing
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
			{
				cout<<s[i][j]<<"\t";
			}
	cout<<"\n";
	}
	int L=sym(s,5);
	if(L==0)
	cout<<"Not Symmetric";
	else
	cout<<"Symmetric";
	
	
}
int sym(int a[][5],int row)
{
	for(int i=0;i<row; i++)
	for(int j=i+1;j<5;j++)
	if(a[i][j]!=a[j][i])
	return 0;
	
	return 1;
}
