#include<iostream>
using namespace std;
void fact();
void fact(){
	int n,f=1;
	cout<<"\nEnter Any Number : ";
	cin>>n;
	for(int i=n;i>=1;i--){
	f=f*i;
	}
	cout<<"\nFactorial Of "<<n<<"is :"<<f;

}
int main(){
	fact();
	return 0;
}
