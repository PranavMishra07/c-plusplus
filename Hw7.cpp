#include<iostream>
using namespace std;
int main(){
	int A[3][3];
	int r,c;
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			cout<<"Enter Element "<<r<<c<<" : ";
			cin>>A[r][c];
		}
			}
				cout<<"\nMatrix is : \n\n";
		for(r=0;r<3;r++){
			for(c=0;c<3;c++){
				cout<<A[r][c]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
