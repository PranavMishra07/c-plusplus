#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string s="Wellcome to Cybrome";
	
	ofstream out("hello.txt");
	out<<s;
	out.close();
	return 0;
}
