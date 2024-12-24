//. Find second largest element in an array
#include<iostream>
using namespace std;
int main(){
	int i;
	int arr[4];
   int size=sizeof(arr)/sizeof(int);
   cout<<"Enter Number of element : ";
   cin>>i;
for(int i=0;i<size;i++){ 
	cout<<"Enter Elements: ";
	cin>>arr[i];
}
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr[i]>arr[j]){
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"\nSecond largest Element : "<<arr[1];
	return 0;
}
