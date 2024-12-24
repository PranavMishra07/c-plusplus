////#include<iostream>
////using namespace std;
////int main(){
////	string s="This is String";
////	cout<<s;
////	return 0;
////}
//#include<iostream>
//using namespace std;
//int main(){
//	string s;
//	cout<<"Enter any String : ";
//	cin>>s;
//	cout<<s;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	string s;
//	cout<<"Enter any String : ";
//	getline(cin,s);
//	cout<<s;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	string s;
//	cout<<"Enter any String : ";
//	getline(cin,s);
//	int x=s.length();
//	int y=s.size();
//	cout<<"Length Of the String "<<x;
//	cout<<"\nSize of the String "<<y;
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	string s;
//	cout<<"Enter any String : ";
//	getline(cin,s);
//	char x=s.at(3);
//	cout<<"\n3 Index character is : "<<x;
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	string s;
//	cout<<"Enter any String : ";
//	getline(cin,s);
//	cout<<"Reverse String : ";
//	for(int i=s.length()-1;i>=0;i--){
//		cout<<s.at(i);
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main(){
	string s;
	cout<<"Enter Any String : ";
	getline(cin,s);
	int count=0;
	for(int i=0;i<s.length();i++){
		count++;

	}
		cout<<"Number Of Character In the given String : "<<count;
	return 0;
}
