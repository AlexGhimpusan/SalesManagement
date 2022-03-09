#include "Inventory.h"

Inventory::Inventory()
{
}

Inventory::~Inventory()
{
}

void Inventory::displayInventory()
{
	for (Product* p : _inv) {
		p->displayProduct();
	}
}

void Inventory::addProduct(Product* newProd)
{
	_inv.push_back(newProd);
}

void Inventory::deleteProduct(std::string nameProd)
{
	//To Do
}


