#include<iostream>
using namespace std;
template <class T>
T compare(T n1,T n2){
	return n1>n2?n1:n2;
}
int main(){
	int i1,i2;
	i1=10;
	i2=20;
	
	cout<<"\n Largest Number in Integer : "<<compare(i1,i2);
	float f1,f2;
	f1=1.0f;
	f2=1.1f;
	cout<<"\n Largest Number in float : "<<compare(f1,f2);
	
	string s1,s2;
	s1="HELLO";
	s2="hello";
	cout<<"\n Largest string: "<<compare(s1,s2);
	
	char c1,c2;
	c1='A';
	c2='a';
	cout<<"\n Largest character  : "<<compare(c1,c2);
	


	
}
