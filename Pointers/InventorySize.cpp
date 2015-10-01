#include "Header.h"

int InventorySize()
{
	int size;
	ifstream inFile;
	size = 0;

	inFile.open("Inventory.txt");

	while (inFile)
	{

		inFile.ignore('\n');
		inFile.ignore('\n');
		inFile.ignore('\n');
		if (inFile)
			size++;
	}

	inFile.close();
	return size;
}