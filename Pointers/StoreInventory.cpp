#include "Header.h"

InventoryItem StoreInventory(InventoryItem inventoryList[], ofstream &outFile)
{
	int index = 0;
	ifstream inFile;


	inFile.open("Inventory.txt");
	
	outFile << "Name of Equipment" << "\t Cost" << "\t Quantity";
	outFile << "\n\nPRIOR TO PURCHASE";

	while (inFile)
	{
		getline(inFile, inventoryList[index].itemName);
		inFile >> inventoryList[index].itemPrice;
		inFile >> inventoryList[index].itemQuantity;
		inFile.ignore(1000, '\n');

		PrintToOutFile(outFile, inventoryList[index]);

		index++;
	}

	inFile.close();

	outFile << "\n\n CUSTOMERS PURCHASES";


	return *inventoryList;

}