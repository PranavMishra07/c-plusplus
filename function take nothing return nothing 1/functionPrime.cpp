//Prime number Programm
#include<iostream>
using namespace std;
void prime();      //
void prime(){
	int n,count=0;
	cout<<"\nEnter Any Number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
    	if(n%i==0){
    		count++;
		}
	}
    if(count==2){
    	cout<<"\nThis is Prime Number ";
	}
	else{
		cout<<"\nThis is Not Prime Number ";
	}
}
int main(){
	prime();
	
}
