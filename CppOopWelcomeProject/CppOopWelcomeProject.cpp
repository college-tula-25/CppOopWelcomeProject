#include <iostream>

struct SArray
{
	int size{};
	int* items{};

};

class Array
{
	int size{};
	int* items{};
public:
	Array() : Array(0){}

	Array(int size) 
		: size{ size }, 
		items{ new int[size] }
	{
		std::cout << this << " construct\n";
	}

	void PushBack(int value)
	{
		int* temp = new int[size + 1];
		for (int i{}; i < size; i++)
			temp[i] = items[i];
		items[size] = value;
		delete[] items;
		items = temp;
		size++;
	}

	void SetItem(int index, int value)
	{
		if (index < 0 || index >= size)
			throw -1;

		items[index] = value;
	}

	int GetItem(int index)
	{
		if (index < 0 || index >= size)
			throw - 1;

		return items[index];
	}

	int GetSize()
	{
		return size;
	}
};


int main()
{
	Array array;
	Array vector;
}


