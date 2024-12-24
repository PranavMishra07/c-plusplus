//Taking nothing returning something
#include<iostream>
using namespace std;
void square(); //Declare Function
void square(){  //function Definition
	int n,s;
	cout<<"\nEnter Any Number : ";
	cin>>n;
	s=n*n;
	cout<<"\nSquare is : "<<s;
}
int main(){   //calling function
	square();
	square();

}
