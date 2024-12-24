//taking nothing returning nothing
#include<iostream>
using namespace std;
void add();  //step 1: Function Declare
void add(){  //step 2 : Function Definition
	int n1,n2,n3;
	cout<<"\nEnter Number 1 : ";
	cin>>n1;
	cout<<"\nEnter Number 2 : ";
	cin>>n2;
	n3=n1+n2;
	cout<<"\nAddition : "<<n3;
	
}
int main(){
	add();  //step : Function calling   = you can call function  many times
	add();
}
