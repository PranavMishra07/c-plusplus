#include<iostream>
using namespace std;
int main(){
	int A[4][4];
	int r,c;
	int min=0;
	int max=0;
	cout<<"\n Enter Matrix A\n";
	for(r=0;r<4;r++){
		for(c=0;c<4;c++){
			cout<<"Enter Element Index Of"<<r<<c<<" : ";
			cin>>A[r][c];
		}
	}
	min=A[0][0];
	max=A[0][0];
	cout<<"\nOutput Of Matrix A\n";
	for(r=0;r<4;r++){
		for(c=0;c<4;c++){
			cout<<"\t"<<A[r][c];
		}
		cout<<"\n";
	}
	
	for(r=0;r<4;r++){
			if(A[r][c]>max){
				max=A[r][c];
			}
		}
			for(c=0;c<4;c++){
				if(A[r][c]<min){
					min=A[r][c];
				}
		}
			cout<<"\nMaximum Element Of the Index"<<max;
	        cout<<"\nMinimum Element Of the Index"<<min;
	return 0;
}
