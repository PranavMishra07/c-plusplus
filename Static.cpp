#include<iostream>
using namespace std;
class Counter{
	public:
		int x;
		static int count;
		static int getCount();
		Counter(){
			cout<<"\nDefault constructor is called";
			int x=1;
			count++;
		}
		Counter(int x){
			this->x=x;
			cout<<"\nParameterized constructor is Called";
			count++;
		}
		
};
int Counter::count=0;
int Counter::getCount(){
	return count;
}
int main(){
 Counter c1;
 Counter c2;
 Counter c3(10);
 cout<<"\nNumber object Created : "<<c1.count;
  cout<<"\nNumber object Created : "<<c2.count;
   cout<<"\nNumber object Created : "<<c3.count;
    cout<<"\nNumber object Created : "<<Counter::count;
    cout<<"\nCall Static Method : "<<Counter::getCount();
    return 0;
}
