//#include<iostream>
//using namespace std;
//class Student{
//
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
//
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
//public:
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
//				this->p;
//			}
//			void setC(int c){
//				this->c;
//			}
//			void setM(int m){
//				this->m;
//			}
//			void setH(int h){
//				this->h;
//			}
//			void setE(int e){
//				this->e;
//			}
//			void setPer(float per){
//				this->per;
//			}
//	
//		
//};
//int main(){
//	Student s;
//	s.setName("Pranav");
//}
#include<iostream>
using namespace std;
class Point{
	private:
	int x;
	int y;
	public:
		Point(){
			cout<<"\nDefault Constructer Called";
			x=1;
			y=1;
		}
		Point(int a,int b){
		    cout<<"\nParameterized Constructor is called";
			x=a;
			y=b;
		
		}
		int getX(){
			return x;
		}
		int getY(){
			return y;
		}
		void setX(int a){
			x=a;
		}
		void setY(int b){
			y=b;
		}
	
};
int main(){
	Point p1;
    cout<<"\nX_CO : "<<p1.getX();
    cout<<"\nY_CO : "<<p1.getY();
    p1.setX(40);
    p1.setY(49);
    cout<<"\nX_CO : "<<p1.getX();
    cout<<"\nY_CO : "<<p1.getY();
    
}
