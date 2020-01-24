#include <iostream>
#include <cmath>
using namespace std;

void accelerate(int& speed, int acc){
	int addSpeed;
	addSpeed = speed + acc;
	cout << "Final Speed " << addSpeed << endl;
}

int main(int argc, char const *argv[])
{	
	int spd;
	int acc;
	spd = 250;
	acc = 10;

 	accelerate(spd,acc);

	return 0;
}