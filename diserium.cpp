#include<iostream>
using namespace std;
int main(){
	int n,res=0,r;
	cout<<"Enter a Number : ";
	cin>>n;
	while(n!=0){
		r=n%10;
		res=res*10+r;
		n=n/10;
	}
	cout<<"reverse number : "<<res;

int count=0,i;
while(i=0;i++;){
	i=res/10;
	cout<<(res*i)<<endl;
	count++;
}
cout<<"Digit of row"<<count;
return 0;
}

