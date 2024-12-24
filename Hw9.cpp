#include<iostream>
using namespace std;
int main(){
	int n;
	int freq[7]={0,0,0,0,0,0,0};
	int arr[]={1,2,3,1,2,3,4};
	for(int i=0;i<7;i++){
		int element=arr[i];
		arr[i]=element;
		freq[element]++;
	}
	cout<<"\nElement After Removing Duplicates : \n";
	for(int i=0;i<7;i++){
		if(freq[i]>1){
//			cout<<"\t"<<i;
		
	
	for(int i=0;i<7;i++){
		if(freq[i]=1){
			cout<<"\t"<<i;
		}
	}
	
	
	
	return 0;
}
