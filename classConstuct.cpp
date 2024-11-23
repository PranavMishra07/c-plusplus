//default Constructer
#include<iostream>
using namespace std;
class Point{
	int x;
	int y;
	public:
		Point(){
			cout<<"\nDefault Constructor is called ";
			x=0;
			y=0;
		}
		Point(int a,int b){
			cout<<"\nParameterized constructor is called";
			x=a;
			y=b;
		}
		void showData(){
			cout<<"\nX is :"<<x;
			cout<<"\nY is : "<<y;
		}
};
int main(){
	Point p;
	p.showData();
	Point p1(1,2);
	p1.showData();
	Point p2(3,4);
	p2.showData();
	Point p3(10,20);
	p3.showData();
	
}
