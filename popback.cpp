//pop back delete character at the end of the string
#include<iostream>
using namespace std;
int main(){
	string s;
	cout<<"Enter any String : ";
	cin>>s;
	s.pop_back();
	s.pop_back();
	cout<<"\nAfter Delete Last Character : "<<s;
	return 0;
}
