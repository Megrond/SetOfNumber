#pragma once
#include <Windows.h>
#include <iostream>

using namespace std;

class SetOfNumber
{
	uint32_t* arr;
	uint32_t sszz; //запоминаем размер массива
public:
	SetOfNumber(unsigned int size, uint32_t* arr) : arr{ new uint32_t[size] }, sszz{ size } 
	{
		uint32_t index{ 0 };
		for (uint32_t i = 0; i < sszz; i++)
		{
			if (!has(arr[i], index))
			{
				this->arr[index] = arr[i];
				index++;
			}
		}
		uint32_t* temp = new uint32_t[index];
		for (uint32_t i = 0; i < index; i++)
		{	
			temp[i] = arr[i];
		}
		delete[] this->arr;
		this->arr = temp;

		sszz = index;
	
	}
	SetOfNumber() : SetOfNumber(0, nullptr) {}
	SetOfNumber(const SetOfNumber& obj) : arr{ new uint32_t[obj.sszz] }, sszz{ obj.sszz } { //копируем

		for (uint32_t i{ 0 }; i < obj.sszz; i++)
		{
			this->arr[i] = obj.arr[i];
		}
	}
	~SetOfNumber() 
	{
		delete[]arr;
	}
	bool has(uint32_t value, uint32_t limit = -1) const;

	void show() const
	{
		for (uint32_t i{ 0 }; i < sszz; i++)
		{
			cout << this->arr[i];
		}
	}


};