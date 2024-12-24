//#include<iostream>
//using namespace std;
//int main(){
//	int sum=0; 
//	// declare the array    
//	int arr[5];
//	// initialize the array
//	arr[0]=10;
//	arr[1]=20;
//	arr[2]=30;
//	arr[3]=40;
//	arr[4]=50;
//	//perform operation
//
//sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
//// print the all element
//	cout<<arr[0];
//	cout<<endl<<arr[1];
//	cout<<endl<<arr[2];
//	cout<<endl<<arr[3];
//	cout<<endl<<arr[4];
//
//cout<<"\nSum of All Element are : "<<sum;
//	
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){ 
//	// declare the array    
//float per[5];
//	// initialize the array
//    per[0]=10;
//	per[1]=20;
//	per[2]=30;
//	per[3]=40;
//	per[4]=50;
//	
//
//// print the all element
//	cout<<per[0];
//	cout<<endl<<per[1];
//	cout<<endl<<per[2];
//	cout<<endl<<per[3];
//	cout<<endl<<per[4];
//
//	
//	
//	return 0;
//}
//sum of even numbers in array
//#include<iostream>
//using namespace std;
//int main(){
//	int nums[5];
//	int i,sum=0;
//	for(i=0;i<5;i++){
//		cout<<"Enter Element Index of"<<i<<" : ";
//		cin>>nums[i];
//	}
//	cout<<"\nElement of the array : ";
//	for(i=0;i<5;i++){
//		if(nums[i]%2==0){
//			cout<<"\n"<<nums[i];
//			sum=sum+nums[i];
//		}
//		
//	}
//	cout<<"\nSum of all Even Elements are : "<<sum;
//return 0;	
//}
//decending order
#include<iostream>
using namespace std;
int main(){
	int nums[10];
	int i,sum=0;
	for(i=0;i<10;i++){
		cout<<"Enter Element Index of"<<i<<" : ";
		cin>>nums[i];
	}
	cout<<"\nElement of the array : ";
	for(i=9;i>=0;i--){
			cout<<"\n"<<nums[i];
			
		
		
	}
return 0;	
}


