#include<iostream>
using namespace std;
int main(){
//	int x=1;
//	int y=2;
//	
//	int *p1;
//	int *p2;
//	
//	p1=&x;
//	p2=&y;
//	
//	int c=*p1+*p2;
//	cout<<endl<<p1;
//	cout<<endl<<*p1;
//	cout<<endl<<&p1;
//	cout<<"\nAddition is : "<<c;
int l=7;
int b=9;

int *p1;
int *p2;

p1=&l;
p2=&b;

int a=*p1 * *p2;
cout<<" Area Of  Rectangle : "<<a;
}
