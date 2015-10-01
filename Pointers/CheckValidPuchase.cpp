
#include "Header.h"

void GetValidPurchase(InventoryItem inventoryList[], InventoryItem purchasedItems[], int &amountItemPurch, int *menuSelction, ofstream &outFile)
{
	InventoryItem purchasItem;
	int purchaseAmount = 0;
	

	
	cout << "\nQuantity Of Item Being Purchased ";
	purchaseAmount = GetAndCheckInput(inventoryList[*menuSelction - 1].itemQuantity, 0);

	purchasItem = inventoryList[*menuSelction - 1];

	purchasItem.itemQuantity = purchaseAmount;
	purchasedItems[amountItemPurch] = purchasItem;
	PrintToOutFile(outFile, purchasItem);

	inventoryList[*menuSelction - 1].itemQuantity = inventoryList[*menuSelction - 1].itemQuantity - purchaseAmount;
	amountItemPurch++;
}
