//table program
#include<iostream>
using namespace std;
void table();
void table(){
	int i,n;
	cout<<"\nEnter Any Number : ";
	cin>>n;
	for(i=1;i<=10;i++){
		cout<<"\n "<<n<< "*"<<i<<" : "<<(n*i);
	}
}
int main(){
	table();
	return 0;
}
