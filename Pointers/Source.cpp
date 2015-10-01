
#include "Header.h"

int main()
{
	InventoryItem *inventoryList;
	InventoryItem *purchasedItems;
	InventoryItem currentItem;
	ofstream      outFile;
	int           *menuSelection;
	int           *sizeOfArray;
	int           index;
	int           amountItemsPurch;

	//Initilizations
	sizeOfArray = new int;
	menuSelection = new int;
	amountItemsPurch = 0;

	outFile.open("OutFile.txt");
	*sizeOfArray = InventorySize();


	inventoryList = new InventoryItem[*sizeOfArray];
	purchasedItems = new InventoryItem[*sizeOfArray];

	*inventoryList = StoreInventory(inventoryList, outFile);


	*menuSelection = PointOfSalesMenu(sizeOfArray, inventoryList);

	while (*menuSelection != 0)
	{
		GetValidPurchase(inventoryList, purchasedItems, amountItemsPurch, menuSelection, outFile);
		*menuSelection = PointOfSalesMenu(sizeOfArray, inventoryList);
	}

	outFile << "\n\nINVENTORY AFTER PURCHASES";

	
	for (index = 0; index < *sizeOfArray; index++)
	{
		currentItem = inventoryList[index];
		PrintToOutFile(outFile, currentItem);
	}

	PrintReceipt(purchasedItems, amountItemsPurch);

	outFile.close();

	delete[] inventoryList;
	delete sizeOfArray;
	delete menuSelection;


	return 0;
}