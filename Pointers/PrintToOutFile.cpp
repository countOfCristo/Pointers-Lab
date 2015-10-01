
#include "Header.h"

void PrintToOutFile(ofstream &outFile, InventoryItem printItem)
{
	outFile << left;
	outFile << endl << setw(25) << printItem.itemName;
	outFile << right;
	outFile << printItem.itemPrice << "\t ";
	outFile << printItem.itemQuantity;
}