#include <iostream>
using namespace std;

int GetInput(){
	int sales;
	cout << "Enter weekly sales: ";
	cin >> sales;

	return sales;
}

int  CalcMethod1(int weeksales){
	int calc1;
	calc1 = 600;

	return calc1;
}

int  CalcMethod2(int weeksales){
	int calc2;
	calc2 = 7 + 0.10*weeksales;
	
	return calc2;
}

int  CalcMethod3(int weeksales){
	int calc3;
	calc3 = (20 + 0.20)*weeksales;
	
	return calc3;
}

int main() {
	int weeksales = GetInput();
	int calc1 = CalcMethod1(weeksales);
	int calc2 = CalcMethod2(weeksales);

	cout << "Calc 1: "<< calc1<< endl;
	cout << "Calc 2: "<< calc2<< endl;
}