//cube program in f3
#include<iostream>
using namespace std;
int cube();
int cube(){
	int c,n;
	cout<<"\nEnter any Number : ";
	cin>>n;
	c=n*n*n;
	return c;
}
int main(){
	int c=cube();
	cout<<"\nCube is : "<<c;
	cout<<"\nCube is : "<<cube();
}
