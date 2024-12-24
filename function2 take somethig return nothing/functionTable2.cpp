//Table Programm
#include<iostream>
using namespace std;
void table(int);
void table(int n){
	for(int i=1;i<=10;i++){
		cout<<endl<<n<<"*"<<i<<" : "<<(n*i);
	}
}
int main(){
	int n;
	cout<<"\nEnter Any Number : ";
	cin>>n;
	table(n);
}
