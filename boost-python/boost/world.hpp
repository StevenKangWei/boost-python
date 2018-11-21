#include <string>
#include <iostream>

struct World
{
	World() 
	{
		std::cout << "world constructor" << std::endl;
	}

	~World()
	{
		std::cout << "world destructor" << std::endl;
	}

	void set(std::string msg) { this->msg = msg; }
	std::string greet() { return msg; }
	std::string msg;
};