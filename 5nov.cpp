//matrix addition
#include<iostream>
using namespace std;
int main(){
	int arr[3][3];
	int r,c;
	int A[3][3];
	int sum;
	for( r=0;r<3;r++){
		for(c=0;c<3;c++){
			cout<<"Enter matrix A"<<r<<c<<" : ";
			cin>>A[r][c]; 
		}
	}
	cout<<"\nOutput of matrix A \n ";
	for(r=0;r<3;r++){
		sum=0;
		for(c=0;c<3;c++){
			cout<<"\t"<<A[r][c];
		sum=sum+A[r][c];
			
			
		}
	}

	
	return 0;
	
}
