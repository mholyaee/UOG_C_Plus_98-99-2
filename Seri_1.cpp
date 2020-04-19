#include<iostream>
using namespace std;

int main(){
	
	float Sum=0;

	for(int i=3;i<=99;i+=2)
	Sum+=1.0/i;
	
	cout<<"The Sum of these measures:"<<Sum;
}
