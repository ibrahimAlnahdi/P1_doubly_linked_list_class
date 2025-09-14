#pragma once
#include <iostream>
using namespace std;
template<class T>
class clsDblLinkedList
{
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
	}
	void DeleteLastNode()
	{
		if (head == NULL)
			return;
		if (head->next == NULL)
		{
			delete head;
			head = NULL;
		}
		Node* last = head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		
		last->prev->next = NULL;
		delete last;
	}
};

