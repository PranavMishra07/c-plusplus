//call by value
#include<iostream>
using namespace std;
void Swap(int*,int*);
void Swap(int *a,int *b){
	int c=*a;
	*a=*b;
	*b=c;
	cout<<"\nSwapping inside swap function : A= "<<*a<<"  B= "<<*b;
}
int main(){
	int a,b;
	a=7;
	b=5;
	
	cout<<"\nSwapping Before inside main function : A= "<<a<<"   B= "<<b;
	Swap(&a,&b);
	cout<<"\nSwapping After inside main function : A= "<<a<<"   B= "<<b;

}
