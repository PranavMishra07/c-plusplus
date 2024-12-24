#include<iostream>
using namespace std;
int sum(int,int);
int sum(int arr[],int size){
if(size==0){    //base condition
	return 0;
}
else{
	return arr[size-1]+sum(arr,size-1);
 }
}
int main(){
	int x[]={10,20,30,40};
//	int sp=sizeof(x)/sizeof(int);
//	cout<<sp;
	cout<<"\nsum Of Digit : "<<sum(x,4);
	
}
