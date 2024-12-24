
#include<iostream>/
using namespace std;
int main(){
	int i;
	int nums[10];
	for(i=0;i<=10;i++){
	cout<<"Enter Element of index "<<i<< " : ";
	cin>>nums[i];
}
    cout<<"Even numbers in the array Are : ";
    for(i=0;i<=10;i++){
    	if(nums[i]%2==0){
    		cout<<"\n"<<nums[i];
			}
    	}
    	    cout<<"\nOdd numbers in the array Are : ";

    	 for(i=0;i<=10;i++){
    	if(nums[i]%2!=0){
    		cout<<"\n"<<nums[i];
			}
    	}
    	
	

	return 0;
}
