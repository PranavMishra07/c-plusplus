#include<iostream>
using namespace std;
void perfect();
void perfect(){
	int n,sum=0,i;
	cout<<"\nEnter Any number : ";
	cin>>n;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(n==sum){
		cout<<"\nThis is a Perfect Number ";
		
	}
	else{
		cout<<"\nThis is not a Perfect Number ";
	}
}
int main(){
	perfect();
	perfect();
	perfect();
	perfect();
	perfect();
	return 0;
}
