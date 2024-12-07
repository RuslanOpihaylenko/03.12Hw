#include "MyArray.h"
#include<iostream>
using namespace std;

MyArray::MyArray()
{
	this->size = 0;
	this->arr = nullptr;
}

MyArray::MyArray(unsigned int size)
{
	this->size = size;
	if (size > 0)
	{
		this->arr = new int[this->size] {};
	}
	else
	{

		this->arr = nullptr;
	}

}

MyArray::MyArray(unsigned int size, int* arr)
{
	this->size = size;
	if (size > 0)
	{
		this->arr = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->arr[i] = arr[i];
		}
	}
	else
	{
		this->arr = nullptr;
	}

}

void MyArray::printArray() const
{
	if (this->size > 0)
	{
		for (int i = 0; i < this->size; i++)
		{
			cout << this->arr[i] << ' ';
		}
		cout << endl;
	}
	else
	{
		cout << "Empty Array(\n";
	}
}

void MyArray::setSize(unsigned int size)
{
	this->size = size;
}



unsigned int MyArray::getSize() const
{
	return this->size;
}

MyArray::MyArray(const MyArray& obj)
{
	this->size = obj.size;
	if (this->size > 0)
	{
		this->arr = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->arr[i] = obj.arr[i];
		}
	}
	else
	{
		this->arr = nullptr;
	}
}

void MyArray::changeLong(unsigned int size)
{
	this->size = size+1;
}

void MyArray::sortArray()
{
	if (this->size > 0)
	{
		for (int i = 0; i < this->size; i++)
		{
			for (int i = 0; i < this->size; i++)
			{
				int swap = this->arr[i];
				this->arr[i] = this->arr[i + 1];
				this->arr[i + 1] = swap;
				cout << this->arr[i + 1] << ' ';
			}
		}
		cout << endl;
	}
	else
	{
		cout << "Empty Array(\n";
	}
}

void MyArray::minNum()
{
	if (this->size > 0)
	{
		for (int i = 0; i < this->size; i++)
		{
			int min = arr[0];
			if (this->arr[i] < min)
			{
				min = this->arr[i];
			}
			cout << min << ' ';
		}
		cout << endl;
	}
	else
	{
		cout << "Empty Array(\n";
	}
}

void MyArray::maxNum()
{
	if (this->size > 0)
	{
		for (int i = 0; i < this->size; i++)
		{
			int max = arr[0];
			if (this->arr[i]  > max)
			{
				max = this->arr[i];
			}
			cout << max << ' ';
		}
		cout << endl;
	}
	else
	{
		cout << "Empty Array(\n";
	}
}

MyArray::~MyArray()
{
	if (this->arr != nullptr)
	{
		delete[] arr;
	}
}
