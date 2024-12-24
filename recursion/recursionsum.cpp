//sum of digits using recursion
#include<iostream>
using namespace std;
int sumofDigit(int);
int sumofDigit(int n){  //base casr
	if(n>=0 && n<=9){
		return n;
	}
	else{
		//recusive case
		return (n%10)+sumofDigit(n/10);
	}
}
int main(){
	cout<<"\nsum of Digits : "<<sumofDigit(123456789);
	return 0;
}
