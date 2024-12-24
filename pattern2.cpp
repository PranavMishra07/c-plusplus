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
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	int r,c;
//	for(r=5;r>=1;r--){
//		for(c=5;c>r;c--){
//			cout<<" ";
//		}
//		for(c=1;c<=2*r-1;c++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main(){
	int r,c;
	for(r=1;r<=5;r++){
		for(c=5;c>r;c--){
			cout<<" ";
		}
		for(c=1;c<=2*r-1;c++){
			cout<<"*";
		}
		cout<<endl;
}


	for(r=4;r>=1;r--){
		for(c=5;c>r;c--){
			cout<<" ";
		}
		for(c=1;c<=2*r-1;c++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
