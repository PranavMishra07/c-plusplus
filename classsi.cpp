#include<iostream>
using namespace std;
class Intrest{
	public:
		float p;
		float r;
		float t;
		void acceptData(){
			cout<<"\nEnter Principal : ";
			cin>>p;
			cout<<"\nEnter Rate : ";
			cin>>r;
			cout<<"\nEnter Time : ";
			cin>>t;
		}
		void showData(){
			cout<<"Principal is : "<<p;
			cout<<"\nRate is : "<<r;
			cout<<"\nTime is : "<<t;
		}
		float si(){
			cout<<"\nSimple Interest is : "<<(p*r*t/100);
		}
		float ci(){
			cout<<"\nCompound Interest is : "<<(p*r*t/100)+p;
		}
		
};
int main(){
	Intrest i;
	i.acceptData();
	i.showData();
	i.si();
	i.ci();
}
