#include<iostream>
using namespace std;
void area();
void circ();
void area(){
	float r,ar;
	cout<<"\nEnter Radius : ";
	cin>>r;
	ar=3.14*r*r;
	cout<<"\n Area Of Circle : "<<ar;
}
void circ(){
	float r,cr;
	cout<<"\nEnter Radius : ";
	cin>>r;
	cr=2*3.14*r;
	cout<<"\nCircumference Of Circle : "<<cr;
	
}
int main(){
	area();
	circ();
}
