//#include<iostream>
//using namespace std;
//int main(){
//	int arr[]={1,5,3,6,9,4,7,2,8,10};
//	int size=sizeof(arr)/sizeof(int);
//	cout<<"Size of Array : "<<size;
//	cout<<endl<<"\nPrint Data before Sorting : \n";
//	for(int i=0;i<size;i++){
//		cout<<"\t"<<arr[i];
//	}
//	for(int i=0;i<size;i++){
//		for(int j=i+1;j<size;j++){
//			if(arr[i]>arr[j]){
//				int temp;
//				temp=arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//			}
//		}
//	}
//	cout<<"\nPrint Data after Sorting : \n";
//	for(int i=0;i<size;i++){
//		cout<<"\t"<<arr[i];
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main(){
	int arr[]={1,3,5,6,7,9,2,4,8,10};
	int size=sizeof(arr)/sizeof(int);
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
			int temp;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		}
	}
	cout<<arr[1]<<endl<<arr[-2];
}
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[]={1,5,3,6,9,4,7,2,8,10};
//	int size=sizeof(arr)/sizeof(int);
//	for(int i=0;i<size;i++){
//		for(int j=i+1;j<size;j++){
//			if(arr[i]<arr[j]){
//				int temp;
//				temp=arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//			}
//		}
//	}
//	cout<<"Second Largest Element : "<<arr[1];
//	cout<<"\nSecond Smallest Element : "<<arr[size-2];
//	return 0;
//}
