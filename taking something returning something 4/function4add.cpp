//taking something returning something
#include<iostream>
using namespace std;
int addition(int,int);    //declare Function
//Function Definition
int addition(int a,int b){  //formal arguement / dummy argument
	int c;
	c=a+b;               //operation
	return c;             //returning something
}
int main(){
	int n1,n2,n3;
	cout<<"\nEnter Number 1 : ";
	cin>>n1;
	cout<<"\nEnter Number 2 : ";
	cin>>n2;
	n3=addition(n1,n2);           //Actual arguement
	cout<<"\nAddition is : "<<n3;
}

