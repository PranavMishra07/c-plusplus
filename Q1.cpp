#include<iostream>
using namespace std;
int main(){
	int r,c;
	for(r=1;r<=5;r++){ //1 2
		for(c=5;c>r;c--){// 4
			cout<<" ";
		}
		for(c=1;c<=r;c++){
		cout<<"*"; //
		
		}
	cout<<endl;
}
	return 0;
}
