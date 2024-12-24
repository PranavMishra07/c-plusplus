#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<" a is an alphabet : "<<isalpha('a');
	cout<<"\n 2 is not an alphabet : "<<isalpha('2');
	cout<<"\nZ is an alphabet : "<<isalpha('Z');
	cout<<"\n@ is  an alphabet : "<<isalpha('@');
	cout<<"\n2 is am alphanumeric alphabet : "<<isalnum('2');
	cout<<"\na is an alphanumeric alphabet : "<<isalnum('a');
	cout<<"\nD is an alphanumeric alphabet : "<<isalnum('D');
	cout<<"\n$ is an alphanumeric alphabet : "<<isalnum('$');
	cout<<"\n5 is Digit : "<<isdigit('5');
	cout<<"\nf is Digit : "<<isdigit('f');
	cout<<"\n  is space : "<<isspace(' ');
	cout<<"\n D is Uppercase : "<<isupper('D');
	cout<<"\nd is Uppercase : "<<isupper('d');
	cout<<"\nx in uppercase : "<<(char)toupper('x');
	cout<<"\nA in Lowercase : "<<(char)tolower('A');
//string x="23";
//int y=stoi();
//cout<<"\nConversion dtring to Integer "<<y;
string l="2.34";
//float m=stof(l);
//cout<<"\nconversion string to fl0at "<<m;
return 0;
}


