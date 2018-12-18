#include "boost.h"
#include <Python.h>
#include <cmath>

struct Base : public PyDictObject
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

static inline object __getattr__(Base const& target, object const& key) 
{
	return object(0);
}

static inline void __setattr__(Base const& target, object const& key, object const& value) 
{

}

static inline void __delattr__(Base const& target, object const& key)
{

}

static inline object __getitem__(Base const& target, object const& key)
{
	return object(0);
	//return target[key];
}

static inline void __setitem__(Base const& target, object const& key, object const& value)
{
	PyDict_SetItem((Pyobject *)&target, &key, &value);
}

static inline void __delitem__(Base const& target, object const& key)
{
	
}

BOOST_PYTHON_MODULE(boost) {
	class_<Base, bases<dict>>("Base")
		.def("__getattr__", &__getattr__)
		.def("__setattr__", &__setattr__)
		.def("__delattr__", &__delattr__)
		//.def("__getitem__", &__getitem__)
		.def("__setitem__", &__setitem__)
		//.def("__delitem__", &__delitem__)
		;
};