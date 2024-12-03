#include<iostream>
using namespace std;
class Number{
	public:
		int n;
		Number(){
		cout<<"\Number Class constructor is called ";

		}
		~Number(){
			cout<<"\nNumber class Destructor is called";
		}
		void getNumber(){
			cout<<"\nEnter any Nummber : ";
			cin>>n;
		}
		
};
class square:public Number{
	public:
		square(){
			cout<<"\nSquare Class Constructor is called";
		}
		~square(){
			cout<<"\nSquare class destructor is cslled";
		}
		void getsquare(){
			int x=getNumber();
			int r=x*x;
			cout<<"\nSquare is : "<<r;
		}
};
class Cube:public Number{
	public:
		Cube(){
			cout<<"\nCube Class Constructor is called";
		}
		~Cube(){
			cout<<"\nCube class destructor is cslled";
		}
		void getCube(){
			int x=getNumber();
			int r=x*x*x;
			cout<<"\nCube is : "<<r;
		}
};
int main(){
	square r;
	Cube c;
}
