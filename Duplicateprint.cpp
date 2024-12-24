////duplicate element of array
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	int freq[10]={0,0,0,0,0,0,0,0,0,0};
//	int arr[]={4,2,3,2,5,1,6,5,3,6};
//	for(int i=0;i<10;i++){
//		int element=arr[i];
//		freq[element]++;
//	}
//	cout<<"\nPrint Duplicate Element Of the Array \n";
//	for(int i=0;i<10;i++){
//		if(freq[i]>1){
//			cout<<"\t"<<i;
//		}
//	}
//	return 0;
//}
//duplicate element of array
#include<iostream>
using namespace std;
int main(){
	int n;
	int freq[10]={0,0,0,0,0,0,0,0,0,0};
	int arr[]={4,2,3,2,5,1,6,5,3,6};
	for(int i=0;i<10;i++){
		int element=arr[i];
		arr[i]=element;
		freq[element]++;
	}
	cout<<"\nPrint Duplicate Element Of the Array \n";
	for(int i=0;i<10;i++){
		if(freq[i]==1){
			
			cout<<"\t"<<i;
		}
	}
	return 0;
}
