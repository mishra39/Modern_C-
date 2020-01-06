#include <iostream>
#include <string.h>

using namespace std;

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;

public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size+1];
		memcpy(m_Buffer,string,m_Size);
		m_Buffer[m_Size] = 0;
	}
//Copy Constructor to prevent a shallow copy and allow for a deep copy

	String(const String& other) //we pass the class itself to the constructor
		:m_Size(other.m_Size)
	{
		cout<< "Here" << endl;
		m_Buffer = new char[m_Size+1];
		memcpy(m_Buffer,other.m_Buffer,m_Size+1);
	}

	~String()
	{
		delete[] m_Buffer;
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}

void printObj(const String& string)
{
	cout << string <<endl;
}

int main()
{
	/* code */
	String string = "Akshit_Mishra";
	String second = string;

	printObj(string);
	printObj(second);
	std::cin.get();
	return 0;
}