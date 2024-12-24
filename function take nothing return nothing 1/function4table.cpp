//table Program
#include<iostream>
using namespace std;
int table(int,int);
int table(int n,int i){	
	for( i=1;i<=10;i++){
	cout<<endl<<n*i;
}
	
    
return n*i;
}
int main(){

	int n,t,i;
	cout<<"\nEnter any Number : ";
	cin>>n;
//	t=table(n,i);
	table(n,i);
	table(n,i);
//    cout<<(n*i);
//    cout<<(n*i);
	
	return 0;
}
