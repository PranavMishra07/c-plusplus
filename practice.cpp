//Q1. Explain breck statement in c++ programming 
// Ans= If we want to exit from the loop or switch then we should go
// for break.
// NOTE : break always used inside a loop or switch.
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=10;i++){
		if(i==5){
			break;
		}
		cout<<i<<endl;
	}
	return 0;
}
// Explain continue statement ?
//Ans = If we want to exit from the current iteration then we should 
// go for Continue.
// Example of continue statement
//#include<iostream>
//using namespace std;
//int main(){
//	for(int i=1;i<=10;i++){
//		if(i==5){
//			continue;
//		}
//		cout<<i<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main(){
//	int c,r;
//	for(r=1;r<=5;r++){
//		for(c=1;c<=r;c++){
//			cout<<(r+c)%2;
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	int c,r;
//	for(r=1;r<=5;r++){
//		for(c=1;c<=r;c++){
//			if((r+c)%2==0){
//				cout<<"0";
//			}
//			else{
//				cout<<"1";
//			}
//		}
//	cout<<endl;
//    }
//}
//#include<iostream>
//using namespace std;
//int main(){
//	int r,c;
//	for(r=1;r<=5;r++){
//		for(c=5;c>=r;c--){
//			cout<<" ";// for space print
//		}
//		for(c=1;c<=2*r-1;c++){
//			cout<<"*"; //for * print
//		}
//		cout<<endl;
//	}
//}
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
//		}
//		for(c=1;c<=2*r-1;c++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//for(r=4;r>=1;r--){
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














