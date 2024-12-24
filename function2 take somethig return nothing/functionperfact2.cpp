//perfact program
#include<iostream>
using namespace std;
void perfact(int);
void perfact(int n){
	int sum=0,i;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(n==sum){
		cout<<"\nThis is Perfect Number ";
	}
	else{
		cout<<"\nThis is Not Perfact number";
	}
}
int main(){
	perfact(6);
	int n;
	cout<<"\nEnter Any Number : ";
	cin>>n;
	perfact(n);
}

