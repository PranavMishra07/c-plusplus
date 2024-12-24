//string inUpper case by predifind string method
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cout<<"Enter Any String : ";
	getline(cin,s);
	cout<<"\nString Before Uppercase : "<<s;
	char c;
	string x="";
	for(int i=0;i<s.length();i++){
		c=s.at(i);
		x.push_back(toupper(c));
	}
	cout<<"\nString in Uppercase : "<<x;
	return 0;
}
//string in Lower Case by Predifind string Methods
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string s;
//	cout<<"Enter Any String : ";
//	getline(cin,s);
//	cout<<"\nString Before Lowercase : "<<s;
//	string x="";
//	char c;
//	for(int i=0;i<s.length();i++){
//		c=s.at(i);
//		x.push_back(tolower(c));
//	}
//	cout<<"\nString In Lower Case : "<<x;
//	return 0;
//}
