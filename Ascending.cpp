#include<iostream>
using namespace std;
int main(){
	int arr[]={30,20,10};
	cout<<endl<<"print Data Before Sorting\n";
	for(int i=0;i<3;i++){
	    cout<<"\t"<<arr[i];
	}
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if (arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"\nPrint Data After Sorting : \n";
	for(int i=0;i<3;i++){
		cout<<"\t"<<arr[i];
	}
		return 0;
}
