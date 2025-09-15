#pragma once
#include <iostream>
using namespace std;
template<class T>
class clsDblLinkedList
{
protected:
	int _Size = 0;
public:
	class Node
	{

	public:
		T value;
		Node* next;
		Node* prev;


	};

	Node* head = NULL;
	void InsertAtBiginning(T value)
	{
		Node* newNode = new Node();
		newNode->value = value;
		newNode->next = head;
		newNode->prev = NULL;
		if (head != NULL)
		{

			head->prev = newNode;
		}
		head = newNode;
		_Size++;
	}
	void PrintList()
	{
		Node* Current = head;
		while (Current != NULL)
		{
			cout << Current->value << " ";
			Current = Current->next;
		}

	}
	Node* Find(T Value)
	{
		Node* Current = head;
		while (Current != NULL)
		{
			if (Current->value == Value)
				return Current;
			Current = Current->next;
		}
		return NULL;
	}
	void InsertAfter(Node* Current, T value)
	{
		Node* newNode = new Node();

		newNode->value = value;
		newNode->next = Current->next;
		newNode->prev = Current;

		if (Current->next != NULL)
			Current->next->prev = newNode;
		Current->next = newNode;
		_Size++;


	}
	// extension 8
	bool InsertAfter(int index, T value)
	{
		Node* Current = GetNode(index);
		if (Current != NULL)
		{ 
			InsertAfter(Current, value); 
			return true;
		}
		else
			return false;
	}
	void InsertAtEnd(T value)
	{
		Node* newNode = new Node();
		newNode->value = value;
		newNode->next = NULL;
		if (head == NULL)
		{
			newNode->prev = NULL;
			head = newNode;
		}
		else
		{
			Node* Current = head;
			while (Current->next != NULL)
			{
				Current = Current->next;
			}
			Current->next = newNode;
			newNode->prev = Current;
		}
		_Size++;
	}
	void DeleteNode(Node* NodeToDelete)
	{
		if (head == NULL || NodeToDelete == NULL)
			return;
		if (head == NodeToDelete)
			head == NodeToDelete->next;
		if (NodeToDelete->next != NULL)
			NodeToDelete->next->prev = NodeToDelete->prev;
		if (NodeToDelete->prev != NULL)
			NodeToDelete->prev->next = NodeToDelete->next;
		delete NodeToDelete;
		_Size--;
	}
	void DeleteFirstNode()
	{
		if (head == NULL)
			return;
		Node* temp = head;
		head = head->next;
		if (head != NULL)
			head->prev = NULL;
		delete temp;
		_Size--;
	}
	void DeleteLastNode()
	{
		if (head == NULL)
			return;
		if (head->next == NULL)
		{
			delete head;
			head = NULL;
			_Size--;
			return;
		}
		Node* last = head;
		while (last->next != NULL)
		{
			last = last->next;
		}

		last->prev->next = NULL;
		delete last;
		_Size--;
	}
	// extension 1
	int Size()
	{

		return _Size;
	}
	// extension 2 
	bool IsEmpty()
	{
		return (_Size == 0);
	}
	// extension 3
	void Clear()
	{

		while (_Size > 0)
		{
			DeleteFirstNode();

		}
	}
	// extension 4 

	// my solution //void Reverse()
	//{
	//	clsDblLinkedList<T> ReversedList;
	//	
	//	while (_Size > 0)
	//	{
	//		ReversedList.InsertAtBiginning(head->value);
	//		DeleteFirstNode();
	//	}
	//	head = ReversedList.head;
	//}
	void Reverse()
	{
		Node* Current = head;
		Node* temp = nullptr;

		while (Current != nullptr)
		{
			temp = Current->prev;
			Current->prev = Current->next;
			Current->next = temp;
			Current = Current->prev;


		}
		if (temp != nullptr) // check is linked list empty 
			head = temp->prev;
	}
	// extension 5 
	Node* GetNode(int index)
	{
		if (index > _Size - 1 || index < 0)
			return NULL;
		int Counter = 0;
		Node* Current = head;
		while (Current != NULL && (Current->next != NULL))
		{
			if (Counter == index)
				break;
			Current = Current->next;
			Counter++;
		}
		return Current;

	}
	T GetItem(int index)
	{
		Node* N = GetNode(index);
		return (N == NULL) ? NULL : N->value;
	}
	// extension 7 
	bool UpdateItem(int index, T newValue)
	{
		Node* Curren = GetNode(index);
		if (Curren != NULL)
		{
			Curren->value = newValue;
			return true;
		}
		else
			return false;
	}
};

