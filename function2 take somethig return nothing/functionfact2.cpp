//factorial program
#include<iostream>
using namespace std;
void factorial(int);
void factorial(int n){
	int fact=1;
	for(int i=n;i>1;i--){
		fact=fact*i;
	}
	cout<<fact;
}
int main(){
	factorial(5);
	int n;
	cout<<"\nEnter any Number : ";
	cin>>n;
	factorial(n);
}
