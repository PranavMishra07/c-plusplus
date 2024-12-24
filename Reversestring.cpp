
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cout<<"Enter Any String : ";
	getline(cin,s);
	cout<<"\nString Before Reverse : "<<s;
	reverse(s.begin(),s.begin()+3);
	cout<<"\nString After Reverse : "<<s;
	return 0;
}
