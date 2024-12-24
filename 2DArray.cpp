////Type 1
//#include<iostream>
//using namespace std;
//int main(){
//	int A[3][3];
//	A[0][0]=10;
//    A[0][1]=20;	
//	A[0][2]=30;	
//	A[1][0]=40;
//	A[1][1]=50;
//	A[1][2]=60;
//	A[2][0]=70;
//	A[2][1]=80;
//	A[2][2]=90;
//
//cout<<"\n"<<A[0][0]<<"\t"<<A[0][1]<<"\t"<<A[0][2];	
//cout<<"\n"<<A[1][0]<<"\t"<<A[1][1]<<"\t"<<A[1][2];
//cout<<"\n"<<A[2][0]<<"\t"<<A[2][1]<<"\t"<<A[2][2];
//	return 0;
//}
//Type 2
//#include<iostream>
//using namespace std;
//int main(){
//	int A[3][3]={
//	{11,12,13},
//	{14,15,16},
//	{17,18,19},
//    };
//
//cout<<"\n"<<A[0][0]<<"\t"<<A[0][1]<<"\t"<<A[0][2];	
//cout<<"\n"<<A[1][0]<<"\t"<<A[1][1]<<"\t"<<A[1][2];
//cout<<"\n"<<A[2][0]<<"\t"<<A[2][1]<<"\t"<<A[2][2];
//	return 0;
//}
//type 3
//#include<iostream>
//using namespace std;
//int main(){
//	int A[3][3];
//	cout<<"Enter Element Index Of 00 : \n";
//	cin>>A[0][0];
//	cout<<"Enter Element Index Of 01 : \n";
//	cin>>A[0][1];
//	cout<<"Enter Element Index Of 02 : \n";
//	cin>>A[0][2];
//	cout<<"Enter Element Index Of 10 : \n";
//	cin>>A[1][0];
//	cout<<"Enter Element Index Of 11 : \n";
//	cin>>A[1][1];
//	cout<<"Enter Element Index Of 12 : \n";
//	cin>>A[1][2];
//	cout<<"Enter Element Index Of 20 : \n";
//	cin>>A[2][0];
//	cout<<"Enter Element Index Of 21 : \n";
//	cin>>A[2][1];
//	cout<<"Enter Element Index Of 22 : \n";
//	cin>>A[2][2];
//	
//
//cout<<"\n"<<A[0][0]<<"\t"<<A[0][1]<<"\t"<<A[0][2];	
//cout<<"\n"<<A[1][0]<<"\t"<<A[1][1]<<"\t"<<A[1][2];
//cout<<"\n"<<A[2][0]<<"\t"<<A[2][1]<<"\t"<<A[2][2];
//	return 0;
//}
//type 4 loop
#include<iostream>
using namespace std;
int main(){
	int A[3][3];
    int r,c;
    for(r=0;r<3;r++){
    	for(c=0;c<3;c++){
    		cout<<"Enter Element Index of "<<r<<c<<" : ";
    		cin>>A[r][c];
		}
	}
	cout<<"\nmatrix A : \n";
	    for(r=0;r<3;r++){
	    	for(c=0;c<3;c++){
	    		cout<<"\t"<<A[r][c];
			}
			cout<<"\n";
		}

	return 0;
}
