
#include "Header.h"

void PrintReceipt(InventoryItem listOfPurchased[], int amountOfPurchased)
{
	ofstream receipt;
	int index;
	float totalPriTax;

	receipt.open("Receipt.txt");

	receipt << "\nJohns Sprting Good's\n\n";
	receipt << "\tRECEIPT\n\n";

	receipt << left << setw(30) << "Item" << right << "Quantity\n\n";

	for (index = 0; index < amountOfPurchased; index++)
	{
		receipt << left ;
		receipt << index + 1 << ". - " << setw(25) << listOfPurchased[index].itemName << right;
		receipt << listOfPurchased[index].itemQuantity << endl;
	}

	for (index = 0; index < amountOfPurchased; index++)
	{
		totalPriTax = listOfPurchased[index].itemQuantity * listOfPurchased[index].itemPrice;
	}

	receipt << fixed << setprecision(2);
	receipt << left << setw(18) << "\n\nSubTotal" << totalPriTax << endl;
	receipt << left << setw(18) << "Tax" << totalPriTax * tax << endl;
	receipt << setw(18) << "Total" << totalPriTax + (totalPriTax * tax);

	receipt.close();

	receipt << "Receipt"; 
}