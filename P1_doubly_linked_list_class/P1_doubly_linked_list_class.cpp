// P1_doubly_linked_list_class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"
#include "clsMyDynamicArray.h"
using namespace std;
int main()
{
	clsMyDynamicArray<int> Array(5);
	Array.setItem(0, 10);
	Array.setItem(1, 20);
	Array.setItem(2, 30);
	Array.setItem(3, 40);
	Array.setItem(4, 50);

	cout << "\nis empty " << Array.IsEmpty();
	cout << "\nsize : " << Array.Size();
	cout << "\nArray items : " ;

	Array.Print();

	
	cout << "\nitem 2 : " << Array.GetItem(2);
	Array.Reverse();
	Array.Print();
	Array.DeleteItemAt(2);
	Array.Print();
	cout << "size : " << Array.Size();





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
