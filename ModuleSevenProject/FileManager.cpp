#pragma once

#include "FileManager.h"
#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

FileManager::FileManager() {
	PopulateMap();
}

void FileManager::PopulateMap() {  //Populate map with the file read in
	ifstream mapFS;
	string item;

	mapFS.open("CS210_Project_Three_Input_File.txt");

	if (!mapFS.is_open()) {								
		cout << "Could not open the file." << endl;
	}

	else {
		getline(mapFS, item);
		while (!mapFS.fail()) {
			if (this->produceInventory.count(item) == 0) {
				this->produceInventory.emplace(item, 1);
			}
			else {
				this->produceInventory[item] += 1;
			}
			getline(mapFS, item);
		}
		mapFS.close();
	}

	this->BackupData();
}

void FileManager::BackupData() {  //Saves the data to frequency.dat with frequency numbers
	ofstream backup;

	backup.open("frequency.dat");

	if (!backup.is_open()) {
		cout << "Could not open frequency.dat";
	}

	else {
		for (auto element : this->produceInventory) {
			backup << element.first << " " << element.second << endl;
		}
		backup.close();
	}

}

void FileManager::FindItem() {  //Find an item from within the map and prints numeric frequency
	string item;

	cout << "Please type the name of the product you wish to search for: " << endl;
	cin >> item;

	if (this->produceInventory.count(item) == 0) {
		cout << "There were no " << item << " sold. Press enter to continue." << endl;
	}
	else {
		cout << "There were " << this->produceInventory[item] << " of " << item << " sold." << endl;
		cout << "Press enter to continue." << endl;
	}

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
}

void FileManager::PrintNumList() { //Print all items and their numeric frequency from map
	cout << "List of Produce Sold" << endl;
	cout << "====================" << endl;

	for (auto element : this->produceInventory) {
		cout << element.first << " " << element.second << endl;
	}

	cout << "====================" << endl;
	cout << "****End of List*****" << endl << endl;
	cout << "Press enter to continue." << endl;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
}

void FileManager::PrintHistogram() { //Prints all items and uses '#' to signify 1 occurence
	cout << "List of Produce Sold" << endl;
	cout << "====================" << endl;

	for (auto element : this->produceInventory) {
		cout << left << setw(20) << element.first << " ";

		for (int i = element.second; i > 0; i--) {
			cout << "#";
		}
		cout << endl;
	}

	cout << "====================" << endl;
	cout << "****End of List*****" << endl << endl;
	cout << "Press enter to continue." << endl;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
}
