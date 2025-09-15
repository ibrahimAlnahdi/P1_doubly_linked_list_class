#pragma once
#include <iostream>
#include "clsDblLinkedList.h"
template <class T>
class clsMyQueue
{
protected :
	clsDblLinkedList<T> _MyList;

public :
	void push(T Item)
	{
		_MyList.InsertAtEnd(Item);
	}

	void pop()
	{
		_MyList.DeleteFirstNode();
	}
	int Size()
	{
		return _MyList.Size();
	}
	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}
	T front()
	{
		return _MyList.GetItem(0);
	}
	T back()
	{
		
		return _MyList.GetItem(Size() - 1);
	}

	void Print()
	{
		_MyList.PrintList();
	}
	// 1 git item extension 
	T gitItem(int index)
	{
		return _MyList.GetItem(index);
	}
	 // reverse  Extension 2
	void Reverse()
	{
		_MyList.Reverse();
	}
	// updateItem Extension 3
	void UpdateItem(int index, T newValue)
	{
		_MyList.UpdateItem(index, newValue);
	}
	
	// Extension 4 insert after 
	bool InsertAfter(int index, T item)
	{
		return _MyList.InsertAfter(index, item);
	}
	// Extension 5 insert at fronn 
	void InsertAtFront(T Item)
	{
		_MyList.InsertAtBiginning(Item);
	}
	//Extension  6 insert at back 
	void InsertAtBack(T item)
	{
		_MyList.InsertAtEnd(item);
	}
	// Extension 7 clear 
	void Clear()
	{
		_MyList.Clear();
	}
};

