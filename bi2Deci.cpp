//Binary to decimal
#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[10];
	cout<<"Enter Any number : ";
	cin>>n;
	int i;
	i=0;
	int r;
	while(n!=0){
		r=n%2;
		arr[i]=r;
		i++;
		n=n/2;

	}
	cout<<"\nBinary Number \n";
	for(i=i-1;i>=0;i--){
		cout<<"\t"<<arr[i];
	}
	
	return 0;
}
