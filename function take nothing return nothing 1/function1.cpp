//user defined function example 1
//taking nothing returning nothing
#include<iostream>
using namespace std;
//step 1: function declaration / prototype
void wish();
//step 2: Definition of the function,working of the function
void wish(){
	cout<<"\nEnter Wish ";//line 2
	cout<<"\nGood Evening ....";//line 3
	cout<<"\nExit Wish"; // line 4
	
}
int main(){
	cout<<"\nEnter main"; //line 1
	// step 3 : Call User Defined Function by name
	wish();  //Function Calling
	cout<<"\nExit main";  //line 5
	return 0;
}
