#include<iostream>
using namespace std;
class Rectangle{
		int l;
		int b;
		public:
			void acceptData();
			void showData();
			void getArea();
			void getPira();
	
};
       void Rectangle :: acceptData(){
       	    cout<<"\nEnter Length : ";
       	    cin>>l;
       	    cout<<"\nEnter Breath : ";
       	    cin>>b;
	   }
	   void Rectangle :: showData(){
	   	cout<<"\nLenght : "<<l;
	   	cout<<"\nBreath : "<<b;
	   }
	   void Rectangle :: getArea(){
	   	cout<<"\nArea of Rectangle : "<<(l*b);
	   }
	   void Rectangle :: getPira(){
	   	cout<<"\n Pira of Rectangle : "<<2*(l+b);
	   }
int main(){
	Rectangle r;
	r.acceptData();
	r.showData();
	r.getArea();
	r.getPira();
	
	return 0;
}
