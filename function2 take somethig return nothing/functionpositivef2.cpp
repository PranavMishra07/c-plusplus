#include<iostream>
using namespace std;
void isPositive(int);
void isPositive(int n){
	if(n>0){
		cout<<"\nThis is Positive Number ";
		
	}
	else{
		cout<<"\nThis is Negative Number ";
	}
}
int main(){
	isPositive(10);
	isPositive(-7);
	int n;
	cout<<"\nEnter Any Number : ";
	cin>>n;
	isPositive(n);
	
	
}
