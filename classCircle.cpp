#include<iostream>
using namespace std;
class Circle{
	public:
		float r;      //Member Data
		void getInput(){
			cout<<"\nEnter Radius : ";
			cin>>r;
		}
		void showData(){
			cout<<"\nRadius Is : "<<r;
		}
		void getArea(){
			cout<<"\nArea Of Circle is : "<<(3.14*r*r);
		}
		void getCirc(){
			cout<<"\nCircumference Of Circle is : "<<(2*3.14*r);
		}
};
int main(){
	Circle c;
	cout<<"\nRadius Is : "<<c.r;
	c.getInput();
	c.showData();
	c.getArea();
	c.getCirc();
}
