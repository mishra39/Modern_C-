#include <iostream>
using namespace std;

class Book
{
private:
	int code;
	double priceOne;
	int stock;
	int studnt;
	int opt;
	int used;
	int order;
public:
	void getDetails();
	void printDetails();
	//void action();
	
};

void Book::getDetails(){
	cout << "Please enter the book code: "; cin >> code;
	cout << "single copy price: "; cin >> priceOne;
	cout << "number on hand: "; cin >> stock;
	cout << "Enrollment: "; cin >> studnt;
	cout << "1 for reqd/0  for optional: "; cin >> opt;
	cout << "1 for new/0  for used: "; cin >> used;
	cout << "**********************************************************************" << endl;
}

void Book::printDetails(){
	int order;
	cout << "Book: "<< code << endl;
	cout << "Price: $"<< priceOne << endl;
	cout << "Inventory: "<< stock << endl;
	cout << "Enrollment: "<< studnt<< endl;

	if (opt && used){
		order = ((0.90*studnt)-stock);
		cout << "This book is new and required" << endl;
		cout << "**********************************************************************" << endl;
		cout << "Need to order: "<< order << endl;
		cout << "Total cost: " << (0.80*priceOne)*order << endl;

	}

	else if (!(opt && used)){
		order = ((0.20*studnt)-stock);
		cout << "This book is used and optional" << endl;
		cout << "**********************************************************************" << endl;
		cout << "Need to order: "<< order << endl;
		cout << "Total cost: " << (0.80*priceOne)*order << endl;
	}
}


int main(){
	int run;
	Book books[100];
	int i=0;
	do{
	books[i];
	books[i].getDetails();
	books[i].printDetails();
	i++;
	cout <<"Enter 1 to do another book, 0 to stop. "; cin >> run;
}while(run);
	
}