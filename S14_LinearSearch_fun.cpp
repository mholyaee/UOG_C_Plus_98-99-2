#include<iostream>
using namespace std;

void fill(int [],int );
int search(int [],int ,int );
int main()
{
	int a[10],x;
	fill(a,10);
	cout<<"X is:";
	cin>>x;
	int L=search(a,10,x);
	
	if (L==-1)
	cout<<"Not exist!";
	else
	cout<<"Is in:"<<L;
	
}
void fill(int a[],int L)
{
	for(int i=0;i<L;i++)
	cin>>a[i];
}
int search(int a[],int L,int x)
{
	for(int i=0;i<L;i++)
		if(a[i]==x)
		return i;
		
	return -1;
}
