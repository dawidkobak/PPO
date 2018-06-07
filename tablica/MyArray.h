#ifndef MYARRAY_H
#define MYARRAY_H

class MyArray
{
public:
	MyArray(int* array, const int n_size);

	MyArray(const MyArray& to_copy);

	~MyArray();

	int& id();

	int id() const;

	int& at(int i) const;

	void print() const;

	void resize(int i);

	const int& size;

private:
	int ID;
	int array_size;
	int* table;
	int* bare;
};

#endif
