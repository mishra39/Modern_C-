#include <iostream>
using namespace std;

class Base
{
	int x,y;
public: //Don't have to specify the values of x and y repeatedly for each case
	Base():Base(0,0){}
	Base(int a):Base(a,0) {}

	Base(int a, int b): x{a}, y{b} {}

	void print() 
	{ 
		cout << x << " " << y <<endl;
	}
};

int main()
{
	Base b1;
	Base b2(10);
	Base b3(3.4);

	b1.print();
	b2.print();
	b3.print();
}