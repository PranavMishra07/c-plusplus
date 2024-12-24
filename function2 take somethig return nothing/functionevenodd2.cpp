//even odd program
#include<iostream>
using namespace std;
void even(int);
void even(int n){
	if(n%2==0){
		cout<<"\nThis is Even Number";
	}
	else{
		cout<<"\nThis is Odd Number";
	}
	
}
int main(){
    even(5);
    int n;
    cout<<"\nEnter Any Number : ";
    cin>>n;
    even(n);
}
