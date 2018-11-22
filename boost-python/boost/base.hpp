#include "boost.h"
#include <cmath>
struct Base 
{
	Base() 
	{
		cout << "Base constructor" << endl;
	}

	~Base()
	{
		cout << "Base destructor" << endl;
	}
};

object __getattr__(Base const& target, const char * const key)
{
	//std::cout << key << std::endl;
	return object(sin(1));
}

BOOST_PYTHON_MODULE(boost) {
	class_<Base>("Base")
		.def("__getattr__", &__getattr__)
		;
};