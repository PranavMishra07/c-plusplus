#include<iostream>
using namespace std;

int main(){
	int *a,*b;
	a=new int;
	b=new int;
	*a=10;
	*b=20;
	cout<<"\nAddition : "<<(*a+*b);
	delete a;
	delete b;
	
	return 0;
}
