#include<iostream>
using namespace std;
int intersection(int[],int,int[],int,int [],int);
int main()
{
	int a[10],b[5],c[5];
	for(int i=0;i<10;i++)
	cin>>a[i];
	for(int i=0;i<5;i++)
	cin>>b[i];
	int L=intersection(a,10,b,5,c,5);
	cout<<"The common elements:\n";
	for(int i=0;i<L;i++)
	cout<<c[i]<<"\t";

	
}
int intersection(int a[],int La,int b[],int Lb,int c[],int lc)
{
	int k=-1;
	for(int i=0; i<La;i++)
		for(int j=0;j<Lb;j++)
			if(a[i]==b[j])
				c[++k]=a[i];
				
	return k;
}



