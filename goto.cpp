#include<iostream>
using namespace std;
int main(){
	int n;
	input :
		cout<<"Enter any number :";
		cin>>n;
		if(n<0){
			goto input;
			cout<<"\nThis is if Condition";
			
	}
		else{
			goto output;
			cout<<"\nThis is else condition";
			
		}
		cout<<"\nThis is Outside of if else";
		output :
			cout<<"\nThis is positive number";
			return 0;
		}
