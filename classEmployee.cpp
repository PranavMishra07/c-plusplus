#include<iostream>
using namespace std;
class Employee{
	public:
		string name;
		int empno;
		float sal;
		void getInfo(){
			cout<<"\nEmployee Name : ";
			getline(cin,name);
			cout<<"\nEmployee No : ";
			cin>>empno;
			cout<<"\nSalary Of Employee : ";
			cin>>sal;
		}
		void showInfo(){
			cout<<"\n Name : "<<name;
			cout<<"\nEmployee No. is : "<<empno;
			cout<<"\nSalary is : "<<sal;
		}
		float getHRA(){
			return sal*0.2;
		}
		float getDA(){
			return sal*0.1;
		}
		float getTA(){
			return sal*0.1;
		}
		float getgrossSalary(){
			return sal+getHRA()+getDA()+getTA();
		}
		float getAllincentive(){
			return getHRA()+getDA()+getTA();
		}
};
int main(){
	Employee e;
	e.getInfo();
	e.showInfo();
	cout<<"\nHRA = "<<e.getHRA();
	cout<<"\nDA = "<<e.getDA();
	cout<<"\nTA = "<<e.getTA();
	cout<<"\nGross Salary = "<<e.getgrossSalary();
	cout<<"\nAll Incentive = "<<e.getAllincentive();
	return 0;
}
