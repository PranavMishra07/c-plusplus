#include<iostream>
using namespace std;

template<class T>
void print_Data(T output){
	cout<<"\n Output is "<<output;
	
}
int main(){
	print_Data(10);
	print_Data(10.50);
	print_Data("Pranav");
	print_Data('A');

}
