//print Duplicate and unique element  of the array
#include<iostream>
using namespace std;
int main(){
	int n;
	int freq[i]={0,0,0,0,0,0,0,0,0,0};
	int arr[10]={2,5,1,4,2,6,5,3,3,6};
	for(int i=0;i<10;i++){
		int element=arr[i];
		freq[element]++;
	}
	cout<<"\nPrint Duplicate Element of the array \n";
	for(int i=0;i<10;i++){
		if(freq[i]>1){
			cout<<"\t"<<i;
		}
	}
	cout<<"\nPrint Unique Element Of the Array \n";
	for(int i=0;i<10;i++){
		if(freq[i]==1){
			cout<<"\t"<<i;
		}
	}
}
