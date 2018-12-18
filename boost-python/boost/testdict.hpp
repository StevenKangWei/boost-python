#include <iostream>
#include <boost/python.hpp>
#include <boost/python/dict.hpp>

using namespace boost::python;

struct testdict : public boost::python::dict {
	testdict()
	{
		std::cout << "constructor" << std::endl;
	}

	virtual ~testdict()
	{
		std::cout << "destructor" << std::endl;
	}
};

BOOST_PYTHON_MODULE(boost) {
	class_<testdict, bases<dict>>("testdict");
};