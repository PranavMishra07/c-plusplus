#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string s;
	cout<<"\nEnter Any String : ";
	getline(cin,s);
	ofstream obj("Thursday.txt",ios::app);
	//ios :: app ===> file open in append mode 
	//ios :: in ===> file open in Reading mode 
	//ios :: out ===> file open in Write mode 
	

	obj<<s;
	cout<<"\nData Written success into the File";
	return 0;
}

