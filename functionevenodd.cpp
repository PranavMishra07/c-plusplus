#include<iostream>
using namespace std;
void even();
void odd();
void even(){
	int n;
	cout<<"\nEnter any Number : ";
	cin>>n;
	if(n%2==0){
		cout<<"This is Even Number ";
	}
	else{
		cout<<"\nThis is Odd Number";
	}
}
int main(){
	even();
}
