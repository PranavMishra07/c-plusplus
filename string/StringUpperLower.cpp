//CoNvert String in Upper Case
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string s;
//	cout<<"Enter Any String : ";
//	getline(cin,s);
//	cout<<"\String Before upper Case : "<<s;
//	string x="";
//	char c;
//	for(int i=0;i<s.length();i++){
//		c=s.at(i);
//		if(c>=97 && c<=122){
//			c=c-32;
//			x.push_back(c);
//		}
//		else{
//			x.push_back(c);
//		}
//	}
//	cout<<"\nString In Upper Case : "<<x;
//	
//	return 0;
//}
//Convert String in lower Case
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cout<<"Enter Any String : ";
	getline(cin,s);
	cout<<"String Before Lower Case : "<<s;
	string x="";
	char c;
	for(int i=0;i<s.length();i++){
		c=s.at(i);
		if(c>=65 && c<=96){
			c=c+32;
			x.push_back(c);
		}
		else{
			x.push_back(c);
		}
	}
	cout<<"\nString In Lower Case : "<<x;
	
	return 0;
}
