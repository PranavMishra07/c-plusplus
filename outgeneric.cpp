#include<iostream>
using namespace std;
template <class T>
int compare(int n1,int n2);
int compare(int n1,int n2){
return n1>n2?n1:n2;	
}
string compare(string n1,string n2){
	return n1>n2?n1:n2;
}
int main(){
	int i1,i2;
	i1=20;
	i2=30;
   cout<< compare(i1,i2);
   string s1,s2;
   s1="hello";
   s2="HELLO";
   cout<<compare(s1,s2);
}
