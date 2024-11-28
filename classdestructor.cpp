#include<iostream>
using namespace std;
class Point{
	int x;
	int y;
	public:
		Point(){
			cout<<"\nDefault Constructor is called";
		}
		~Point(){
			cout<<"\nDestructor is Called ";
		}
};
int main(){
	Point p1;
	Point p2;
	
}
