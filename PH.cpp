//Perfect number
	#include<iostream>
	using namespace std;
	int main(){
		int n,sum=0,i;
		cout<<"Enter your number ";
		cin>>n;
		for(i=1;i<n;i++){
			if(n%i==0){
				sum=sum+i;
			}
		}
		if(n==sum){
			 
			 cout<<"This is Perfect Number ";
		}else{
			cout<<"This is Not perfect Number ";
			
		}
		
		return 0;
	}
