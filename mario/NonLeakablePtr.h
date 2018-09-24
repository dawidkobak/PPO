#ifndef NONLEAKABLEPTR_H
#define NONLEAKABLEPTR_H
#include "NonLeakable.h"

class NonLeakablePtr
{
public:
	NonLeakablePtr()
	{
		ptr = nullptr;
	}

	NonLeakablePtr(NonLeakablePtr& obj)
	{
		ptr = obj.ptr;
		obj.ptr = nullptr;
	}

	~NonLeakablePtr()
	{
		delete ptr;
	}

	void MakeNewObject()
	{
		if(ptr)
			delete ptr;
		ptr = new NonLeakable();
	}

	NonLeakable* operator ->()
	{
		return ptr;
	}

	void Print() const
	{
		std::cout << "Object pointing to ";
		if(ptr)
			std::cout << ptr << std::endl;
		else
			std::cout << "nothing\n";
	}

	NonLeakablePtr& operator= (NonLeakablePtr& obj)
	{
		if (ptr == obj.ptr)
			return *this;

		if(ptr)
			delete ptr;

		ptr = obj.ptr;
		obj.ptr = nullptr;

		return *this;
	}

	NonLeakable& operator*()
	{
		return *ptr;
	}

	NonLeakable* operator&()
	{
		return ptr;
	}

private:
	NonLeakable* ptr;
};

#endif