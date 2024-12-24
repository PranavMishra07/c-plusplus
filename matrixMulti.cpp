//multiplication of 2 Matrix 
#include<iostream>
using namespace std;
int main(){
	int A[3][3];
	int B[3][3];
	int C[3][3];
	int r,c;
	cout<<"\n Enter Matrix A \n ";
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			cout<<"Enter Element Index of"<<r<<c<<" : ";
			cin>>A[r][c];
		}
	}
	cout<<"\n Enter Matrix B \n";
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			cout<<"Enter Element index Of"<<r<<c<<" : ";
			cin>>B[r][c];
		}
	}
	//Matrix Addition Logic
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			C[r][c]=+A[r][c]*B[r][c];
		}
	}
	cout<<"\nOutput of Matrix A \n";
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			cout<<"\t"<<A[r][c];
		}
		cout<<"\n";
	}
	cout<<"\nOutput of Matrix B \n";
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			cout<<"\t"<<B[r][c];
		}
		cout<<"\n";
	}
	cout<<"\nOutput of Matrix C \n";
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			cout<<"\t"<<C[r][c];
		}
		cout<<"\n";
	}
	return 0;
}
