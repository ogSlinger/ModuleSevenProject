#pragma once
#include "FileManager.h"

class StoreMenu {

	public:
		StoreMenu();
		~StoreMenu();
		void PrintMenu();
		int ReadInput();
		void MenuSelection(int selection);

	private:
		int selection;
		FileManager* ManagerPtr;

};
