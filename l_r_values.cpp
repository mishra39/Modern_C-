/*rvalues indicate objects eligible for move operations, while lvalues generally don't. 
In concept (though not always in practice), rvalue correspond to temporary objects 
returned from functions, while lvalues correspond to objects you can refer to, either 
by name or by following a pointer or lvalue reference*/
#include <iostream>
using namespace std;

int square(int m)
{
	int sqr = m*m;
	return sqr;
}
int square2(int& x) { return x*x;  }
int square3(const int& x) { return x*x;  }


struct examp
{
	int * ptr;
	examp(){
		ptr = new int;
	}

	examp(const examp & a1){ //copy constructor
		this->ptr = new int;
	}
	
	~examp(){
		delete ptr;
	}
};

int main()
{
	{
		// lvalue examples
		int i = 7;  // i: lvalue
		int *pi = &i;  // i is addressable
		i = 10;  // we can modify it

		class cat {};
		cat c;   // c is an lvalue for a user defined type 
	}
	// rvalue examples
	int i = 7;  // i: lvalue but 7 is rvalue
	int k = i+3;  // (i+3) is an rvalue 
	//int *pi = &(i + 3); // error, it's not addressable
	//i + 3 = 10;   // error - cannot assign a value to it
	//3 = i;        // error - not assignable
	class cat {};
	//c = cat();   // cat() is an rvalue
	int sq = square(10);  // square(10) is an rvalue
	cout<< sq <<endl;

	{
		//rvalue and lvalue- Reference
		int i;
		int &r = i;
		//int &r; = 7; // error: lvalue cannot be bound to rvalue 7
		//However, we can bind an rvalue to a const lvalue reference (const reference):
		const int&v = 7;
		cout << v << endl;

		square2(i);  // OK
		//square(7);  // error, 7 is an rvalue and cannot be assigned to a reference
		///Is there a way to pass 7 to the square function? Seems I've seen it working.
		//Yes, we can. The const is here for us!
		square3(i);  // OK
		square3(7);  // OK
	}
	{
		int &&k = 19; //rvalue reference 
		cout << ++k <<endl;
	}
}