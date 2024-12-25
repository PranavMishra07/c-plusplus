//With Generic And Template
#include<iostream>
using namespace std;
template<class T>
class Test{
	public:
		T obj ;
		Test(T x){
			obj =x;
		}
		int showData(T obj){
			cout<<"\nObject is :"<<obj;
			
		}
};
int main(){
	Test <int> t1(10);
	t1.showData(10);
	Test <float> t2(10.20);
	t2.showData(20);
	Test <string> t3("Hello world");
	t3.showData("30");
}
