//Factorial Program
#include<iostream>
using namespace std;
int factorial(int);
int factorial(int n,int i){
	int fact=1;
 for( i=n;i>=1;i--){
      fact=fact*i;	
}
   cout<<fact;
return fact;
}
int main(){
	int fact,n,i;
	cout<<"\bEnter Any Number : ";
	cin>>n;
	factorial(n,i);
	factorial(n,i);
	return 0;
}
