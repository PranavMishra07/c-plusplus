#include<iostream>
using namespace std;
class Box{
	private:
		double length;
		public:
			box(double len){
				length=len;
			}
			double getLength(){
				return length;
			}
			void setLength(double len){
				length=len;
			}
			friend void printLength(Box x1){
				cout<<"\nLength Using Friend Function"<<x1.length;
			}
};
int main(){
	Box b(10.0);
	b.printLength(b);
	return 0;
}
