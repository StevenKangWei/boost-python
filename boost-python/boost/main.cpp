#include <iostream>
#include <boost/python.hpp>

#include "hello.hpp"
#include "world.hpp"
#include "attrdict.hpp"

BOOST_PYTHON_MODULE(boost)
{
	def("hello", hello);
	def("get_test_message", get_test_message);

	class_<World>("World")
		.def("greet", &World::greet)
		.def("set", &World::set)
		;

	class_<AttrDict, bases<dict>>("AttrDict")
		.def("hello", &AttrDict::hello)
		;
}


int main()
{
	std::cout << "hello world" << std::endl;
}