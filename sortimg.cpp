////sorting in ascending order
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[]={30,10,20};
//	cout<<endl<<"\nPrint Data Before Sorting \n";
//	for(int i=0;i<3;i++){
//		cout<<"\t"<<arr[i];
//		
//	}
//	for(int i=0;i<3;i++){
//		for(int j=i+1;j<3;j++){
//			if(arr[i]>arr[j]){
//				int temp;
//				temp=arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//			}
//		}
//	}
//	cout<<"\nPrint Data After Sorting\n";
//	for(int i=0;i<3;i++){
//		cout<<"\t"<<arr[i];
//	}
//	return 0;
//}
//sorting in Descending order
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[]={30,10,20};
//	cout<<endl<<"\nPrint Data Before Sorting \n";
//	for(int i=0;i<3;i++){
//		cout<<"\t"<<arr[i];
//		
//	}
//	for(int i=0;i<3;i++){
//		for(int j=i+1;j<3;j++){
//			if(arr[i]<arr[j]){
//				int temp;
//				temp=arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//			}
//		}
//	}
//	cout<<"\nPrint Data After Sorting\n";
//	for(int i=0;i<3;i++){
//		cout<<"\t"<<arr[i];
//	}
//	return 0;
//}
//print second largest element of the array
#include<iostream>
using namespace std;
int main(){
	int arr[]={30,10,20};
	cout<<endl<<"\nPrint Data Before Sorting \n";
	for(int i=0;i<3;i++){
		cout<<"\t"<<arr[i];
		
	}
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(arr[i]>arr[j]){
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"\nPrint Data After Sorting\n";
	for(int i=0;i<3;i++){
		cout<<"\t"<<arr[i];
	}
	return 0;
}

