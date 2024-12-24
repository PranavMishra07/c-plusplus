//Palindron Programm
#include<iostream>
using namespace std;
void palindrom();
void palindrom(){
	int n,res=0,r;
	cout<<"\nEnter Any Number : ";
	cin>>n;
	int m=n;
	while(n!=0){
		r=n%10;
		res=res*10+r;
		n=n/10;
	}
	if(m==res){
	   cout<<"\nThis is a Palindrom Number ";
	}else{
		cout<<"\nThis is Not A Palindrom Number";
	}
}
int main(){
	palindrom();
}
