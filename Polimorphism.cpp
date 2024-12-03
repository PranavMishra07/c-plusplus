#include<iostream>
using namespace std;
class Test{
	public:
		void add(){
			int a,b;
			a=1;
			b=2;
			cout<<"\nAddition Without argument : "<<(a+b);
		}
		void add(int a,int b){
			cout<<"\nAddition With two int argument : "<<(a+b);
		}
			void add(float a,int b){
			cout<<"\nAddition With (float,int)  argument : "<<(a+b);
		}
			void add(float a,float b){
			cout<<"\nAddition With two float argument : "<<(a+b);
		}
			void add(string a,string b){
			cout<<"\nAddition With two string argument : "<<(a+b);
		}
			void add(string a,string b){
			cout<<"\nAddition Without argument : "<<(a+b);
		}
};
int main(){
    Test t;
	t.add();
	t.add(2.5f,6);
	t.add(2.5f,8.6f);
	t.add("12","34");
		
	return 0;
}
