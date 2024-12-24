//returning something taking nothing
#include<iostream>
using namespace std;
int addition();
int addition(){
	int a,b,c;
	cout<<"\nEnter value of A : ";
	cin>>a;
	cout<<"\nEnter value of B : ";
	cin>>b;
	c=a+b;
	return c;
}
int main(){
	int r=addition();
	cout<<"\nAddition Is : "<<r;
	
}
