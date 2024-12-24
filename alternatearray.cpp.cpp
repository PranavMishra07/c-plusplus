//alternate
#include<iostream>
using namespace std;
int main(){
	int nums[10];
	int i,sum=0;
	for(i=0;i<=10;i++){
		cout<<"Enter Element of Index "<<i<< " : ";
        cin>>nums[i];  
	}
	cout<<"Alternate Element of Index : ";
	for(i=0;i<=10;i++){
//		cout<<nums[i]<<endl;
//		cout<<"\n"<<nums[i];

	   if(nums[i]%2==0){
	   	cout<<nums[i]<<endl;
		}
		
	}
}
