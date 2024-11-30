#include<iostream>
using namespace std;
class M{
	protected:
	int m;
	public:
	M(){
		cout<<"\nM class default Constructor is called";
		
	}
	~M(){
	cout<<"\nM class Destructor is called ";
	}
	void getM(int m){
		this->m=m;
	}
};
class N{
	protected:
	int n;
	public:
	N(){
		cout<<"\nN class default Constructor is called";
		
	}
	~N(){
	cout<<"\nN class Destructor is called ";
	}
	void getN(int n){
		this->n=n;
	}
};
class P:public M,public N{
	protected:
	int t=0;
	public:
	P(){
		cout<<"\nP class default Constructor is called";
		
	}
	~P(){
	cout<<"\nP class Destructor is called ";
	} 
	void getTotal(){
		t=m+n;
		
	}
	void showData(){
		cout<<"\n M value"<<m;
		cout<<"\n N value : "<<n;
		cout<<"\n t total value : "<<t;
	}
};
int main(){
	P obj1;
  obj1.getM(10);
  obj1.getN(20);
  obj1.getTotal();
  obj1.showData();
	
		
	return 0;
}
