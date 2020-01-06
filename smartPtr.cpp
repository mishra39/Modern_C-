//new and delete are used to create and clear memory on heap; smart pointers automate that process
#include <iostream>
#include <string.h>
#include <memory> //Required to access smart pointers

using namespace std;

/*Three types of smart pointers: Unique Pointer: Created once and that's it
2. Shared pointer. Good for sharing   
*/

class Entity
{
public:
	Entity()
	{
		cout<< "Created Entity" << endl;
	}
	~Entity()
	{
		cout<< "Created Entity" << endl;
	}
	
};


int main(int argc, char const *argv[])
{
	{ // unique_ptr is destroyed after the scope ends. You cannot directly pass a unique ptr to a function etc. 
	// We cannot copy one unique ptr to another because the copy constructor for unique ptr is set to delete

		std::unique_ptr<Entity> entity = std::make_unique<Entity>();
	}

	//shared ptr example
	{
		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
		
	}

	std::cin.get();
	return 0;
}