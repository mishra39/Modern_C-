#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{	
	char first_name[30], last_name[30]; int age;
	char file_name[20];

	//Collect the data
	cout << "Enter First Name: "; cin >> first_name;
	cout << "Enter Last Name: "; cin >> last_name;
	cout << "Enter Age: "; cin >> age;
	cout<<  endl << "Enter File name: "; cin >> file_name;

	//Create an ofstream called People, open the stream for output
	ofstream People(file_name, ios::out);

	//Write the output to a file
	People << first_name << last_name << endl << age << endl; 
	People.close();

	ifstream People_in(file_name,ios::in);

	if(!People_in){
		cerr << "Unable to open file akshitm_details"<< endl;
		exit(1);
	}

	People_in >> first_name >> last_name >> age;

	return 0;
}