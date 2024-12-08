#include<iostream>
using namespace std;

class Parent{
	public:
		virtual void display(){
			cout<<"\nThis is Parent Class Display method";
		}
};
class Derived : public Parent{
	public:
	void display(){
			cout<<"\nThis is Derived Class Display method";
		}
};
class Derived1 : public Parent{
	public:
	void display(){
			cout<<"\nThis is Derived1 Class Display method";
		}
};
int main(){
	Parent *p1;

	Derived obj1;
	p1=&obj1;
	p1->display();
	Derived1 obj2;
	p1=&obj2;
	p1->display();
return 0;	
}
