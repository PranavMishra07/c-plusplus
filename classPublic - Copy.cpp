//Access Specifier
#include<iostream>
using namespace std;
class Demo{
	public:
		int x=10;
		int y=20;
		void showData(){
			cout<<"\n X is : "<<x;
			cout<<"\n Y is : "<<y;
		}
};
int main(){
	Demo d;
	d.showData();
//	cout<<d.x;
//	cout<<d.y;
	return 0;
}
