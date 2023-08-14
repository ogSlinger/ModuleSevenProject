#include <iostream>
#include <limits>
#include "StoreMenu.h"
#include "FileManager.h"

StoreMenu::StoreMenu() {
	this->ManagerPtr = new FileManager();
	this->selection = -1;
	this->MenuSelection(this->ReadInput());
}

StoreMenu::~StoreMenu() { //Make sure file manager object gets deleted in destructor
	delete ManagerPtr;
}

void StoreMenu::PrintMenu() {
	cout << "------------------" << endl;
	cout << "-------Menu-------" << endl;
	cout << "------------------" << endl << endl;
	 
	cout << "1) View amount of an item sold" << endl;
	cout << "2) View all items and amount sold" << endl;
	cout << "3) View frequency chart of all items" << endl;
	cout << "4) Quit" << endl;
}


int StoreMenu::ReadInput() {

	while (this->selection == -1) {
		this->PrintMenu();

		cout << "Please make a selection (1-4): " << endl;
		cin >> this->selection;

		if (this->selection < 1 || this->selection > 4) {  //Input Checking, sets selection to -1 if fail.
			cout << "Invalid Input. Press enter to continue" << endl;
			cin >> this->selection;
			this->selection = -1;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}

	return this->selection;
}

void StoreMenu::MenuSelection(int selection) {
	switch (selection) {
		case 1:
			this->ManagerPtr->FindItem();
			break;
		case 2:
			this->ManagerPtr->PrintNumList();
			break;
		case 3:
			this->ManagerPtr->PrintHistogram();
			break;
		case 4:
			return;  //Exits program
	}

	//Reset and recalls menu if not "exit"
	this->selection = -1;
	this->MenuSelection(this->ReadInput());
}
