#include <iostream>
#include <string.h>
#include <memory> //Required to access smart pointers
#include <string>

int main()
{//Allocating memory on the stack means just moving the stack pointer 
//the desired amount of bytes and returning the new address
//stack memory allocation is really fast

	int num = 5; //allocating memory on the stack
	int array[5] ; //example for arrays
	array[0] = 1;
	array[1] = 1;
	array[2] = 1;
	array[3] = 1;
	array[4] = 1;
//For allocating memory on heap:
//
	int* hvalue = new int;
	*hvalue = 5;
	int* harray = new int[5];
	harray[0] = 1;
	harray[1] = 1;
	harray[2] = 1;
	harray[3] = 1;
	harray[4] = 1;
//Have to delete memory on the heap if we use 'new'.
//would not have to do this if we had used smart pointers
	delete hvalue;
	delete[] harray;
}