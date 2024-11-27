//#include<iostream>
//using namespace std;
//class Student{
//private:
//		string name;
//		string enroll;
//		char grade;
//		int p;
//		int c;
//		int m;
//		int h;
//		int e;
//		float per;
//		//member Data
//public:
//		string getName(){
//			return name;
//		}
//		string getEnroll(){
//			return enroll;
//		}
//	    char getGrade(){
//	    	return grade;
//	    	
//		}
//		int getP(){
//			return p;
//		}
//		int getC(){
//			return c;
//		}
//		int getM(){
//			return m;
//		}
//		int getH(){
//			return h;
//		}
//		int getE(){
//			return e;
//		}
//		float getPer(){
//			return (p+c+m+h+e)/5.0;
//		}
//		//getter
//
//			void setName(string n){
//				name=n;
//			}
//			void setEnroll(string e){
//				enroll=e;
//			}
//			void setGrade(char g){
//				grade=g;
//			}
//			void setP(int p){
//				this-> p=p;
//			}
//			void setC(int c){
//				this-> c=c ;
//			}
//			void setM(int m){
//				this-> m=m;
//			}
//			void setH(int h){
//				this-> h=h;
//			}
//			void setE(int e){
//				this-> e=e ;
//			}
//			void setPer(float per){
//				this-> per=per;
//			}
//	
//		
//};
//int main(){
//	Student s;
//	s.setName("Pranav");
//	s.setEnroll("1234CS56");
//	s.setGrade('A');
//	s.setP(67);
//	s.setC(78);
//	s.setM(85);
//	s.setH(97);
//	s.setE(90);
//	s.setPer(s.getPer());
//	cout<<"\nStudent Information : ";
//	cout<<"\nNAME : "<<s.getName();
//	cout<<"\nEnrollment  : "<<s.getEnroll();
//	cout<<"\nP : "<<s.getP();
//	cout<<"\nC : "<<s.getC();
//	cout<<"\nM : "<<s.getM();
//	cout<<"\nH : "<<s.getH();
//	cout<<"\nE : "<<s.getE();
//	cout<<"\nGrade : "<<s.getGrade();
//	cout<<"\nPercentage : "<<s.getPer();
//	
//	}
#include<iostream>
using namespace std;
class Student{
private:
		string name;
		string enroll;
		char grade;
		int p;
		int c;
		int m;
		int h;
		int e;
		float per;
		//member Data
public:
		string getName();
		string getEnroll();
	    char getGrade();
		int getP();
		int getC();
		int getM();
		int getH();
		int getE();
		float getPer();
		//getter

			void setName(string name);
			void setEnroll(string enroll);
			void setGrade(char g);
			void setP(int p);
			void setC(int c);
			void setM(int m);
			void setH(int h);
			void setE(int e);
			void setPer(float per);
};
string Student :: getName(){
	return name;
}
string Student :: getEnroll(){
	return enroll;
}
char Student :: getGrade(){
	return grade;
}
int Student :: getP(){
	return p;
}
int Student :: getC(){
	return c;
}
int Student :: getM(){
	return m;
}
int Student :: getH(){
	return h;
}
int Student :: getE(){
	return e;
}
float Student :: getPer(){
	return (p+c+m+h+e)/5.0;
}
void Student :: setName(string n){
	name=n;
}
void Student :: setEnroll(string e){
	enroll=e;
}
void Student :: setGrade(char g){
	grade=g;
}
void Student :: setP(int p){
	this->p=p;
}
void Student :: setC(int c){
	this->c=c;
}
void Student :: setM(int m){
	this->m=m;
}
void Student :: setH(int h){
	this->h=h;
}
void Student :: setE(int e){
	this->e=e;
}
void Student :: setPer(float per){
	this->per=per;
}
int main(){
	Student s;
	s.setName("Pranav");
	s.setEnroll("1234CS56");
	s.setGrade('A');
	s.setP(67);
	s.setC(78);
	s.setM(85);
	s.setH(97);
	s.setE(90);
	s.setPer(s.getPer());
	cout<<"\nStudent Information : ";
	cout<<"\nNAME : "<<s.getName();
	cout<<"\nEnrollment  : "<<s.getEnroll();
	cout<<"\nP : "<<s.getP();
	cout<<"\nC : "<<s.getC();
	cout<<"\nM : "<<s.getM();
	cout<<"\nH : "<<s.getH();
	cout<<"\nE : "<<s.getE();
	cout<<"\nGrade : "<<s.getGrade();
	cout<<"\nPercentage : "<<s.getPer();
	
	}
//#include<iostream>
//using namespace std;
//class Point{
//	private:
//	int x;
//	int y;
//	public:
//		Point(){
//			cout<<"\nDefault Constructer Called";
//			x=1;
//			y=1;
//		}
//		Point(int a,int b){
//		    cout<<"\nParameterized Constructor is called";
//			x=a;
//			y=b;
//		
//		}
//		int getX(){
//			return x;
//		}
//		int getY(){
//			return y;
//		}
//		void setX(int a){
//			x=a;
//		}
//		void setY(int b){
//			y=b;
//		}
//	
//};
//int main(){
//	Point p1;
//    cout<<"\nX_CO : "<<p1.getX();
//    cout<<"\nY_CO : "<<p1.getY();
//    p1.setX(40);
//    p1.setY(49);
//    cout<<"\nX_CO : "<<p1.getX();
//    cout<<"\nY_CO : "<<p1.getY();
//    
//}
