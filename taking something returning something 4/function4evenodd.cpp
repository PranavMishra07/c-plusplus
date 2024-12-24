//even odd Program
#include<iostream>
using namespace std;
int even(int);
int even(int e){
	if(e%2==0){
		cout<<"\nThis is Even Number";
	}
	else{
		cout<<"\nThis is Odd Number";
	}
	return e;
}
int main(){
	int n;
	cout<<"\nEnter Any Number : ";
	cin>>n;
    n=even(n);	
    n=even(n);
    even(n);
    even(n);
   return 0;
}
