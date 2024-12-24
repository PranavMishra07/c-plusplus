//prime number Programm
#include<iostream>
using namespace std;
void prime(int);
void prime(int n){
	int count=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		cout<<"\nThis is Prime Number ";
	}
	else{
		cout<<"\nThis is not Prime Number";
	}
}
int main(){
	prime(4);
	int n;
	cout<<"\nEnter Any Number : ";
	cin>>n;
	prime(n);
}
