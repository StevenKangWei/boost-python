#include <iostream>
#include <boost/python.hpp>
#include <boost/python/dict.hpp>

using namespace boost::python;

struct AttrDict: public dict {
	AttrDict() : dict()
	{
		std::cout << "Attrdict constructor" << std::endl;
	}

	~AttrDict()
	{
		std::cout << "Attrdict destructor" << std::endl;
	}

	void hello() { std::cout << "hello world" << std::endl; }
};