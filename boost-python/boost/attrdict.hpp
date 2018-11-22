#include <iostream>
#include <boost/python.hpp>
#include <boost/python/dict.hpp>

using namespace boost::python;

struct AttrDict: public object {
	AttrDict()
	{
		std::cout << "Attrdict constructor" << std::endl;
	}

	virtual ~AttrDict()
	{
		std::cout << "Attrdict destructor" << std::endl;
	}

	void hello() { std::cout << "hello world" << std::endl; }
};