#pragma once
#include <iostream>
using namespace std;
template <class T>
class clsMyDynamicArray
{
protected:
	int _Size;
	T* _TempArray;
public:
	T* OriginalArray;
	clsMyDynamicArray(int size = 0)
	{
		if (size < 0)
			size = 0;
		_Size = size;
		OriginalArray = new T[size];
	}
	~clsMyDynamicArray()
	{
		delete[] OriginalArray;
	}
	bool setItem(int index, T value)
	{
		if (index < 0 || index >= _Size)
			return false;
		OriginalArray[index] = value;
		return true;
	}
	bool IsEmpty()
	{
		return _Size == 0;
	}
	int Size()
	{
		return _Size;
	}
	void Print()
	{
		for (int i = 0; i < _Size; i++)
		{
			cout << OriginalArray[i] << " ";
		}
		cout << endl;
	}
	void Resize(int newSize)
	{
		if (newSize == _Size)
			return;
		if (newSize < 0)
			newSize = 0;

		_TempArray = new T[newSize];
		if (newSize < _Size)
			_Size = newSize;
		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}
		_Size = newSize;
		delete[] OriginalArray;
		OriginalArray = _TempArray;

	}
	T GetItem(int index)
	{
		return OriginalArray[index];
	}

	void Reverse()
	{
		_TempArray = new T[_Size];
		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[_Size - i - 1];
		}
		delete[] OriginalArray;
		OriginalArray = _TempArray;

	}
	void clear()
	{
		_Size = 0;
		_TempArray = new T[0];
		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}

	bool DeleteItemAt(int index)
	{
		if (index < 0 || index >= _Size)
			return false;
		_Size--;
		_TempArray = new T[_Size];
		// copy all befor index 
		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		// copy all after index;
		for (int  i = index + 1 ; i < _Size + 1; i++)
		{
			_TempArray[i - 1] = OriginalArray[i];
		}
		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;
	}

};

