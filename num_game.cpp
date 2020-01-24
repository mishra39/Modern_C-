#include <iostream>
using namespace std;

int main(){

	int rnum = 0;
	int num_guess = 0;
	rnum = rand() % 100 + 1;
do{

	cout << "Enter a guess between 0 and 100: ";

	cin >> num_guess;
	cout << endl;

	if(num_guess > rnum){
		cout<<"that's too high"<<endl;
	}

	else if (num_guess < rnum ){
		cout<<"that's too low"<<endl;
	}
}while(num_guess!=rnum);

cout << "Congrats! Your guess was correct."<<endl;

}