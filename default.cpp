#include<iostream>
using namespace std;
class Test{
	public:
		void add(){
			int a,b,c;
			a=10;
			b=20;
			c=a+b;
			cout<<"\nAdd without Parameter"<<c;
		}
		void add(int a,int b){
			int c;
			c=a+b;
			cout<<"\nAdd with two parameter :"<<c;
		}
		void add(int a,int b,int d){
			int c;
			c=a+b+d;
			cout<<"\nAdd with Three parameter :"<<c;
		}
//		void add(int a=1,int b=2,int c=3, int d=4,int e =5){
//			int r=a+b+c+d+e;
//			cout<<"\nAdd : "<<r;
//		}
};
int main(){
	Test t;
	t.add();
	t.add(11,20);
	t.add(1,2,3);
//    t.add(10,20,30,40);
//    t.add(10,20,30,40,50);
//	t.add(1);
}
