//#include<iostream>
//using namespace std;
//int main(){
//	int r,c;
//	for(r=1;r<=5;r++){
//		for(c=5;c>r;c--){
//			cout<<" ";
//		}
//		for(c=1;c<=2*r-1;c++){
//			cout<<"*";
//		}
//		cout<<endl;
//}
//	for(r=4;r>=1;r--){
//		for(c=5;c>r;c--){
//			cout<<" ";
//		}for(c=1;c<=2*r-1;c++){
//				cout<<"*";
//			}
//			cout<<endl;
//		}
//		
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	input :
//		cout<<"Enter Any Number : ";
//		cin>>n;
//		if(n){
//			goto input;
//		}
//		else{
//			goto output;
//		}
//		output :
//			cout<<"This is Even Number";
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	cout<<"\nEnter Any Number : ";
//	exit(0);
//	cout<<"\nExit Main";
//	
//}
#include<iostream>		
using namespace std;
int main(){
	int n,i;
	int t1=0,t2=1;
	int t3=t1+t2;
	cout<<"Enter Terms : ";
	cin>>n;
	cout<<"Fibonacci Series : "<<t1<<" "<<t2;
	for(i=3;i<=n;i++){
		cout<<" "<<t3;// 0  1 1 2 
		t1=t2;
		t2=t3;
		t3=t1+t2;
	}
	return 0;
}		
		
		
		
		
		
		
		
		
		
		
		
		
		
		




























