#include<iostream>
using namespace std;
int main(){
	int n,i;
	int t1=0,t2=1;
	int t3=t1+t2;
	cout<<"\nEnter Terms : ";
	cin>>n;
	cout<<"\nFibonacci Series : "<<t1<<" "<<t2;
for(int i=0;i<=n;i++){
	cout<<" "<<t3;
	t1=t2;
	t2=t3;
	t3=t1+t2;

}
	return 0;
}
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	input :
//	cout<<"Enter Any Number : ";
//	cin>>n;
//	if(n<0){
//		goto input;
//	}
//	else{
//		goto output;
//	}
//	output :
//	cout<<"\nThis is Positive Number ";
//}











