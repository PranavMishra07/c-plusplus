#include<iostream>
using namespace std;
class Point{
	public:
		int x;
		int y;
		public:
		  void showData(){
		  	cout<<"\nX_CO : "<<x;
		  	cout<<"\nY_CO : "<<y;
		  }	
		  Point(){
		  	 
			 cout<"\nParent Class Default Constructor is called";
			  
			  
 		  }
 		  ~Point(){
 		  	cout<<"\nParent Class Destructor is Called";
 		  	
		   }
};
class Circle:public Point{
	public:
		Circle(){
			cout<<"\nChild Class Constructor Is Called";
		}
		~Circle(){
			cout<<"\nChild Class destructor is Called";
		}
};
int main(){
//	Point();
//	Point p1;
//	p1.showData();
	Circle c1;
//	c1.showData();
	return 0;
}
