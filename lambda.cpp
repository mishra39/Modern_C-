#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

//using namespace std;

/*The purpose of this code is to print each element of a vector using function pointer
and a lambda
*/
//void(*func)(int) defines the return type, function pointer and the input type to the function 
void vecfunc(const std::vector<int>& values, const std::function<void(int)>& func)
{
	for (int value : values)
		func(value); //calling the function
}

int main()
{
	int lamcheck  = 6;
	std::vector<int> values = {5,6,8,9,22}; //define the vector to be printed
	
	auto greater = std::find_if(values.begin(),values.end(), [](int value) {return value > 7;}); //Finds elements greater than 7 in the vector values
	std::cout << *greater << std::endl;
	
	auto lambdafunc = [=](int value) {std::cout<<"Value of lambda check is: "<< lamcheck << std::endl;};
	vecfunc(values,lambdafunc); 
	//defining a lambda for printing the vector values

	std::cin.get();
}