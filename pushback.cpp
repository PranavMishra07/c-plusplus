//Push Back Member Function is used to append character at the end of
#include<iostream>
using namespace std;
int main(){
	string s;
	char c;
	cout<<"Enter 5 Character : \n";
	for(int i=0;i<5;i++){
		cin>>c;
		s.push_back(c);
	}
	cout<<"\nString is : "<<s;
	cout<<"\nLength Of the String Is : "<<s.length();
	return 0;
}
