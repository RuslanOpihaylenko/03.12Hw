#include<iostream>
#include"MyArray.h"
#include"MyArray.cpp"

using namespace std;

int main()
{
	MyArray fr;
	fr.setSize(10);
	fr.getSize();
	fr.changeLong(10);
	fr.sortArray();
	fr.minNum();
	fr.maxNum();
	fr.printArray();
}