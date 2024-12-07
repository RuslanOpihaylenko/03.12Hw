#pragma once
class MyArray
{
private:
	unsigned int size;
	int* arr;
public:
	MyArray();
	MyArray(unsigned int size);
	MyArray(unsigned int size, int* arr);
	void printArray() const;
	void setSize(unsigned int size);
	unsigned int getSize() const;
	MyArray(const MyArray& obj);
	void changeLong(unsigned int size);
	void sortArray();
	void minNum();
	void maxNum();
	~MyArray();
};

