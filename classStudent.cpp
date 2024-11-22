#include<iostream>
using namespace std;
class Student{
	public :
		string name;
		string enroll;
		char s;
		int p;
		int c;
		int m;
		int h;
		int e;
		void getData(){
			cout<<"\nEnter Name : ";
			getline(cin,name);
			cout<<"\nEnter Enrollment : ";
			getline(cin,enroll);
			cout<<"\nEnter Section : ";
			cin>>s;
			cout<<"\nEnter Physics Marks :";
			cin>>p;
			cout<<"\nEnter Chemistry Marks :";
			cin>>c;
			cout<<"\nEnter Maths Marks :";
			cin>>m;
			cout<<"\nEnter Hindi Marks :";
			cin>>h;
			cout<<"\nEnter English Marks :";
			cin>>e;	
		}
		void display(){
			cout<<"\nName : "<<name;
			cout<<"\nEnrollment : "<<enroll;
			cout<<"\nSection : "<<s;
			cout<<"\nPhysics Marks : "<<p;
			cout<<"\nChemistry Marks : "<<c;
			cout<<"\nMaths Marks : "<<m;
			cout<<"\nHindi Marks : "<<h;
			cout<<"\nEnglish Marks : "<<e;
		}
		int getTotalmarks(){
			return (p+c+m+h+e);
		}
		float getPercentage(int t){
			return t/5.0;
		}
		void getGrade(float per){
			if(per>=90){
				cout<<"\nA+ Grade";
			}
			else if(per>=80){
				cout<<"\nA Grade";
			}
			else if(per>=70){
				cout<<"\nB+ Grade";
			}
			else if(per>=60){
				cout<<"\nB Grade";
			}
			else if(per>=50){
				cout<<"\nFail ";
			}
		}
};
int main(){
	Student s;
	s.getData();
	s.display();
  int t=s.getTotalmarks();
  cout<<"\nTotal Marks : "<<t;
	float per=s.getPercentage(t);
	cout<<"\nPercentage Is : "<<s.getPercentage(t);
    s.getGrade(per);
	
	}
