#include <string>
#include <math.h>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

namespace MyNamespace{
	
	const float tax = .0825;
	
	struct InventoryItem
	{
		string itemName;
		float  itemPrice;
		int    itemQuantity;
	};
};

using namespace MyNamespace;

int InventorySize();

int PointOfSalesMenu(int *sizeOfInventory, InventoryItem *inventoryList);

InventoryItem StoreInventory(InventoryItem inventoryList[], ofstream &outFile);

int GetAndCheckInput(const int UPPER_LIMIT, const int LOWER_LIMIT);

void GetValidPurchase(InventoryItem inventoryList[], InventoryItem purchasedItems[],
	                  int &amountItemPurch, int *menuSelction, ofstream &outFile);

void PrintToOutFile(ofstream &outFile, InventoryItem printItem);

void PrintReceipt(InventoryItem listOfPurchased[], int amountOfPurchased);

