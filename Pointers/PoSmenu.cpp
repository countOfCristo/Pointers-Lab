
#include "Header.h"

int PointOfSalesMenu(int *sizeOfInventory, InventoryItem *inventoryList)
{
	int index;
	int menuSelction;

	cout << "\n*********************************";
	cout << "\n*     JOHN'S SPORTING GOODS     *";
	cout << "\n*********************************\n";

	cout << "Please Select The Item Being Purchased: \n";
	for (index = 0; index < *sizeOfInventory; index++)
	{
		cout << index + 1 << ". - ";
		cout << inventoryList[index].itemName;

		if (inventoryList[index].itemQuantity == 0)
		{
			cout << " - OUT OF STOCK";
		}

		cout << endl;
	}
	cout << 0 << ". - DONE WITH PURCHASES\n";

	menuSelction = GetAndCheckInput(*sizeOfInventory, 0);

	return menuSelction;
}