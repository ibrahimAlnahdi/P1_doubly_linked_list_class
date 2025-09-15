#pragma once
#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
// push size pop top bottom gitItem reverse updateitem insertAfrer insert front insrtback 
template <class T>
class  clsMyStack :public   clsMyQueue <T>
{

public:

	void push(T Item)
	{
								
		clsMyQueue <T>::_MyList.InsertAtBiginning(Item);
	}

	T Top()
	{
		return clsMyQueue <T>::front();

	}

	T Bottom()
	{
		return clsMyQueue <T>::back();

	}

};

