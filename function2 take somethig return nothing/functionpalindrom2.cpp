//palindrome Number Programm
#include<iostream>
using namespace std;
void palindrom(int);
void palindrom(int n){
	int m=n,res,r;
	while(n!=0){
		r=n%10;
		res=res*10+r;
		n=n/10;
	}
	if(m==res){
		cout<<"\nThis is Palindrom Number ";
	}
	else{
		cout<<"\nThis is Not Palindrom Number ";
	}
}
int main(){
	palindrom(121);
	int n;
	cout<<"\nEnter Any Number : ";
	cin>>n;
	palindrom(n);
}
