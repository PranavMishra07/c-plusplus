#include<iostream>
using namespace std;
void add(int,int);
void add(int a,int b){
	int c=a+b;
	cout<<"\nAddition is : "<<c;
}
int main(){
	add(4,5);
	int x,y;
	cout<<"\nEnter X : ";
	cin>>x;
	cout<<"\nEnter Y : ";
	cin>>y;
	cout<<"\nAddition Is : "<<x+y;
}

