// P1_doubly_linked_list_class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;
int main()
{
	clsDblLinkedList<short> MyList;
	MyList.InsertAtBiginning(4);
	MyList.InsertAtBiginning(3);
	MyList.InsertAtBiginning(2);
	MyList.InsertAtBiginning(1);
	clsDblLinkedList<short>::Node* n = MyList.Find(3);
	if (n != NULL)
	{
		cout << n->value<<"\n";
	}
	MyList.InsertAfter(n, 35);
	MyList.PrintList();
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
