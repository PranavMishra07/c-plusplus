// factorial recursion programm
#include<iostream>
using namespace std;
int fact(int);
int fact(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
int main(){
	int n;
	cout<<"\nEnter any Number : ";
	cin>>n;
	cout<<"\nFactorial is : "<<fact(n);
}
