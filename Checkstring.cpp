//Check String starts with a Particular string or not.
//Ex:-
//Enter Any String: Welcome To Bhopal
//Check String starts with : Welcome.
//The String start with Welcome.
//else: string does not start with ...;
#include<Iostream>
using namespace std;
int main(){
	string s;
	string st;
	cout<<"Enter Any String : ";
	getline(cin,s);
	cout<<"\nCheck String Starts With : ";
	getline(cin,st);
	if(s.find(st)==0){
		cout<<"\nThe string starts With " <<st;
	}
	else{
		cout<<"\nThe string Does Not Starts With "<<st;
	}
	return 0;
}
