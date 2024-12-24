//move all zero at the end of the array
#include<iostream>
using namespace std;
int main(){
	int arr[]={5, 1, 6, 0, 0, 3, 9, 0, 6, 7, 8, 12, 10, 0, 2};
	int size=sizeof(arr)/sizeof(int);
	cout<<endl<<"Input Array : \n";
	for(int i=0;i<size;i++){
		cout<<"\t"<<arr[i];
	}
	for(int i=0;i<size;i++){
    	for(int j=i+1;j<size;j++){
    		if(arr[i]<arr[j]){
    			int temp;
    			temp=arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
			}
		}
    }
    cout<<endl<<"\nOutput Array : \n";
    for(int i=0;i<size;i++){
    	cout<<"\t"<<arr[i];
	}

	return 0;
}
