#include<iostream>
using namespace std;
int main(){
	float i;
	float A[10];
    float avg=0;
    float sum=0;
	for(i=0;i<10;i++){
		cout<<"Enter Element Index of "<<i<<" : ";
		cin>>A[10];
		sum=sum+A[10];
		avg=sum/10;
	}
		cout<<"Sum of All Index Elements : "<<sum<<endl;
		cout<<"Average of all Index Elements is : "<<avg<<endl;

	return 0;
}
