#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
int main()
{
	int quiz[20][5];
	float avg_perStu[20];
	float avg_perQuiz[5];
	for(int i=0;i<20;i++)
	for(int j=0;j<5;j++)
	{
		int r=rand();
		r%=5;
		quiz[i][j]=r;
	}
	
	for(int i=0;i<20;i++)
	{
	for(int j=0;j<5;j++)
	{
		cout<<quiz[i][j]<<"\t";
	}
	cout<<"\n";
	}
	//Average per student
	for(int i=0;i<20;i++)
	{
	float sum=0;
	for(int j=0;j<5;j++)
	sum+=quiz[i][j];
	
	avg_perStu[i]=sum/5;
	}
	// Average per quiz
	for(int j=0;j<5;j++)
	{
	float sum=0;
	for(int i=0;i<20;i++)
	sum+=quiz[i][j];
	
	avg_perQuiz[j]=sum/20;
	}
	//Demonstrate
	cout<<"\n Average per quiz:";
	for(int i=0; i<5;i++)
	cout<<avg_perQuiz[i]<<"\t";	
	
	cout<<"\n Average per Student:";
	for(int i=0; i<20;i++)
	cout<<avg_perStu[i]<<"\t";	
}



