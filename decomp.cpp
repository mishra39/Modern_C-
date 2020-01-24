#include <iostream>
#include <cmath>
using namespace std;

#define enmyKill = 0
#define more = 0

int startMsg(){

	cout << "Welcome to Artillery."<< endl;
	cout << "You are in the middle of a war and being charged by thousands of enemies." << endl;
	cout << "You have one cannon, which you can shoot at any angle." << endl;
	cout << "You only have 10 cannonballs for this target.." << endl;
	cout << "Let's begin..." << endl;
	cout << endl;

}

int calcDist(int in_angle){
	float Velocity = 200.0; // initial velocity of 200 ft/sec
	float Gravity = 32.2; // gravity for distance calculation
	float time_in_air;
	float distance;

// in_angle is the angle the player has entered, converted to radians.
	time_in_air = (2.0 * Velocity * sin(in_angle)) / Gravity;
	distance = round((Velocity * cos(in_angle)) * time_in_air);
 return int(distance);
}

int main(int argc, char const *argv[])
{
	startMsg();
	int enmydist;
	float angl, distnc,distFinal;

	enmydist = rand() % 1000;

	cout << "The enemy is "<< enmydist << " feet away!!!" << endl;
	do{

		cout<< "What angle? "; cin>>angl;
		distnc = float(calcDist(angl));
		cout << "Distance reached " << distnc << endl;
		distFinal = abs(distnc - enmydist);

		if((distnc - enmydist) > 1){
			cout << "You overshot by "<< distnc - enmydist << "feet" << endl;
		} 

		if((distnc - enmydist) < 0){
			cout << "You undershot by "<< distnc - enmydist << "feet" << endl;
		}
	}while(distFinal > 1);

	cout << "out";
	return 0;
}