// P1_doubly_linked_list_class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"
using namespace std;
int main()
{
	clsMyStack<short> Stack;

	Stack.push(10);
	Stack.push(20);
	Stack.push(30);
	Stack.push(40);

	cout << "\n My Stack : ";
	Stack.Print();
	cout << "\n Size : " << Stack.Size();
	cout << "\n Front : " << Stack.Top();
	cout << "\n Back : " << Stack.Bottom();

	Stack.pop();
	cout << "\n My Stack after pop : \n";
	Stack.Print();

	cout << "\nitem(2) : " << Stack.gitItem(2);
	Stack.Reverse();
	Stack.Print();
	cout << "\nStack after updateing item(2)  to 600 \n" ;
	Stack.UpdateItem(2, 600);
	Stack.Print();
	Stack.InsertAfter(2, 800);
	cout << "\nStack after inserting 800 after item(2) : \n";
	Stack.Print();
	Stack.InsertAtFront(100);
	cout << "\nStack after inserting 100 at front : \n";
	Stack.Print();
	Stack.InsertAtBack(900);
	cout << "\nStack after inserting 900 at back : \n";
	Stack.Print();
	Stack.Clear();

	cout << "\nStack after Clearing : ";
	Stack.Print();
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
