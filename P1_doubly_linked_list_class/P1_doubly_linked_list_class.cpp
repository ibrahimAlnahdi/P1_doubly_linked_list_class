// P1_doubly_linked_list_class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
using namespace std;
int main()
{
	clsMyQueue<short> Queue;

	Queue.push(10);
	Queue.push(20);
	Queue.push(30);
	Queue.push(40);

	cout << "\n My Queue : ";
	Queue.Print();
	cout << "\n Size : " << Queue.Size();
	cout << "\n Front : " << Queue.front();
	cout << "\n Back : " << Queue.back();

	Queue.pop();
	cout << "\n My Queue after pop : ";
	Queue.Print();


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
