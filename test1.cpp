#include<iostream>
using namespace std;
int main(){
	int n,count=0;
	cout<<"\nEnter Any Number :";
	cin>>n;
    for(int i=0;i<=n;i++){
    	if(n%i==0){
    		count++;
		}
	}  
	if(count==2){
		cout<<"\nThis is Prime";
	}
	else{
		cout<<"\nThis is Not Prime";
	}
}

