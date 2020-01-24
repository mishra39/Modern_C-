#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{	
	ifstream People("akshitm_details",ios::in);

	if(!People){
		cerr << "Unable to open file akshitm_details"<< endl;
		exit(1);
	}

	People >> first_name >> last_name >> age;
	return 0;
}