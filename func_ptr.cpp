#include <iostream>
#include <vector>

//using namespace std;

/*The purpose of this code is to print each element of a vector using function pointer
and a function pointer
*/
//void(*func)(int) defines the return type, function pointer and the input type to the function 
void vecfunc(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
		func(value); //calling the function
}

//Simpler function pointer example
void printer(int printval)
{
	std::cout<< "Value to be printed is: " << printval << std::endl ;
}

int main()
{
	std::vector<int> values = {5,6,8,9,22}; //define the vector to be printed
	auto lambdafunc = [](int value) {std::cout<<"Value of the vector element is: "<< value << std::endl;};
	vecfunc(values,lambdafunc); 
	//defining a lambda for printing the vector values
	
	//simpler implementation of func pointer
	typedef void(*funcptr)(int);
	funcptr funct = printer;
	funct(11);
	funct(90);
	funct(1);
	funct(2);

	std::cin.get();
}