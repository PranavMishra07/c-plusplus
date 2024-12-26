#include<iostream>
using namespace std;
class Counter{
	public:
		int x;
		static int count;
		static int getCount();
		Counter(){
			cout<<"\nDefault Costructer is Called";
			x=1;
			count++;
		}
		Counter(int x){
			this->x=x;
			cout<<"\nParameterized Constructer is called";
			count++;
		}
};
int Counter :: count=0;
int Counter :: getCount(){
	return count;
}
int main(){
	Counter c1;
	Counter c2;
	Counter c3(5);
	cout<<"\nNumber Of Object Created :"<<c1.count;
	

	cout<<"\nNumber Of Object Created :"<<c2.count;
	
	cout<<"\nNumber Of Object Created :"<<c2.count;

	cout<<"\nNumber Of Object Created :"<<Counter::count;
	cout<<"\nCall Static Method  : "<<Counter::getCount();
	
//	cout<<endl<<c1.count;
//	cout<<endl<<c2.count;
//	cout<<endl<<Counter::count;
//	cout<<endl<<Counter ::getCount();
}
