#include<iostream>
using namespace std;
int main(){
	int c,r;
	int A[3][3];
	int s[3];
	cout<<"\nEnter Matrix A \n";
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			cout<<"Enter Element Index Of"<<r<<c<<" : ";
			cin>>A[r][c];
		}
	}

	cout<<"\nOutput Of Matrix A\n";
	for(r=0;r<3;r++){
		int sum=0;
	   int csum=0;
		for(c=0;c<3;c++){
			cout<<"\t"<<A[r][c];
			sum=sum+A[r][c];
			csum=csum+A[c][r];
    }
		s[r]=csum;
		cout<<"\t"<<sum;
		cout<<"\n";
		}
		for(r=0;r<3;r++){
			cout<<"\t"<<s[r];
		}
		return 0;
}
