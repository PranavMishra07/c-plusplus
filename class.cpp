#include <iostream>
using namespace std;

class Rectangle
{
public:
	int l;
	int b;
	// member Data
	void input()
	{
		cout << "\nEnter Length : ";
		cin >> l;
		cout << "\nEnter Breath : ";
		cin >> b;
	}

	void output()
	{
		cout << "\nLength Is : " << l;
		cout << "\nBreath Is : " << b;
	}
	void getArea()
	{
		cout << "\nArea of Rectangle : " << (l * b);
	}
	void getPira()
	{
		cout << "\nParameter of Rectangle : " << (2 * (l + b));git 
	}	cout << "\nLength is : " << r.l;
	cout << "\nBreath is : " << r.b;
	r.input();
	r.output();
	r.getArea();
	r.getPira();
	return 0;
}
r̥