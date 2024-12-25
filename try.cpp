#include<iostream>
using namespace std;
int main(){
	int a= 10,b=5,c=0;
	cout<<"Line 1";
		cout<<"Line 1";
	cout<<"Line 1";
	cout<<"Line 1";
	cout<<"Line 1";

	try{
		cout<<"\nInside try Block\n";
		if(b==0){
			throw b;
		}
		if(b>1){
			throw 5.0;
		}
		c=a/b;
		cout<<"\nThis is Catch block\n";
	}
	catch(int i){
		
	}
	catch (double){
		
	}
		cout<<"Line 1";
	cout<<"Line 1";
	cout<<"Line 1";
	cout<<"Line 1";
	cout<<"Line 1";
	cout<<"Line 1";
	cout<<"Line 1";
	cout<<"Line 1";
	cout<<"Line 1";

}
