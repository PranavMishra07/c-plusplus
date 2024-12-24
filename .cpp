//#include<iostream>
//using namespace std;
//int main(){
//	char r,c;
//	for(r='a';r<='z';r++){
//		for(c='a';c<=r;c++){
//			cout<<" "<<c;
//			
//		}
//		cout<<endl;
//	}
//	
//	
//	return 0;
//}
#include<iostream>
using namespace std;
int main(){
int r,c,n=1;
//	for(r=1;r<=5;r++){
//		for(c=1;c<=r;c++){
//			cout<<" "<<(char)(64+n);//explicit typecasting (64+c)
//			n++; // re
//		}
//		cout<<endl;
//	}
for(r=1;r<=5;r++){
	for(c=5;c>r;c--){
		cout<<" ";
			}
		for(c=1;c<=r;c++){
			
			cout<<"*";
			 
		}
		cout<<endl;
	}	
	
	return 0;
}
