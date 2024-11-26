#include<iostream>
using namespace std;
class Ractangle{
	int l;
	int b;
	public:
		Ractangle(){
			cout<<"\nEnter Length :";
			cin>>l;
			cout<<"\nEnter Breath : ";
			cin>>b;
			
		}
		Ractangle(int x,int y){
			l=x;
			b=y;
		}
		void showData(){
			cout<<"\nLength : "<<l;
			cout<<"\nBreath : "<<b;
		}
		void getArea(){
			cout<<"\nArea : "<<(l*b);
			
		}
		void getPira(){
			cout<<"\nParameter : "<<(2*(l+b));
		}
		
};
int main(){
	Ractangle r(0,0);
	r.showData();
	r.getArea();
	r.getPira();
	Ractangle r1(8,7);
	r1.showData();
	r1.getArea();
	r1.getPira();
}
