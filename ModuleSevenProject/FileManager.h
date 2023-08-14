#pragma once
#include <map>
#include <string>

using namespace std;

class FileManager {

	public:
		FileManager();
		void PopulateMap();
		void BackupData();
		void FindItem();
		void PrintNumList();
		void PrintHistogram();

	private:
		map<string, int> produceInventory;

};