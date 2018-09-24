#ifndef NONLEAKABLE_H
#define NONLEAKABLE_H
#include <iostream>

class NonLeakable
{
public:
	friend class NonLeakablePtr;
	NonLeakable()
	{
		current_ID = ID++;
		std::cout << "Constructing object " << current_ID << std::endl;
	}

	~NonLeakable()
	{
		std::cout << "Destroying object " << current_ID << std::endl;
	}

	void Print() const
	{
		std::cout << "This is object with ID=" << current_ID << std::endl;
	}

private:
	void* operator new(size_t size)
	{
		return ::new char[size];
	}

	void operator delete(void* pointer)
	{
		char* poi = static_cast<char*>(pointer);
		delete[] poi;
	}

private:
	static int ID;
	int current_ID;
	
};

#endif