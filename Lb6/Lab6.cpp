// Lb6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <functional>
#include "LinkedListNode.h"
#include "LinkedList.h"

using namespace std;

void viewAddLastScreen(LinkedList<int>& list) {
	system("cls");
	cout << "Input value: ";
	int value = 0;
	cin >> value;
	list.addLast(new LinkedListNode<int>(value));
}
void viewAddFirstScreen(LinkedList<int>& list) {
	system("cls");
	cout << "Input value: ";
	int value = 0;
	cin >> value;
	
	list.addFirst(new LinkedListNode<int>(value));
}

void handleInvalidInput() {
	cout << "You inputed the invalid command! Try again!\n";
	system("pause");
}

int main()
{
	system("color 06");
	LinkedList<int> list;

	bool isContinue = true;
	while (isContinue) {
		system("cls");
		cout << "1. Add last" << endl;
		cout << "2. Add first" << endl;
		cout << "3. Remove the last" << endl;
		cout << "4. Change first and last" << endl;
		cout << "5. Exit" << endl;
		cout << "Your list: " << list << endl;
		cout << "Element cout: " << list.getCount() << endl;
		cout << "\nInput command: ";
		char command = 0;
		cin >> command;
		switch (command) {
		case '1': viewAddLastScreen(list);						break;
		case '2': viewAddFirstScreen(list);						break;
		case '3': delete list.removeLast();						break;
		case '4': list.changeFirstToLast();						break;
		case '5': isContinue = false;							break;
		default: handleInvalidInput();							break;
		}
	}

 	return 0;
}