#include <iterator>
#include <list>
#include <iostream>
#include "Inventory.h"

Inventory::Inventory()
{
}

Inventory::~Inventory()
{
}

void Inventory::displayInventory()
{
	std::cout << "\n\n******************************************************************";
	for (Product* p : _inv) {
		p->displayProduct();
	}
	std::cout << "\n******************************************************************";
}

void Inventory::addProduct(Product* newProd)
{
	_inv.push_back(newProd);
}

void Inventory::deleteProduct(std::string nameProd)
{

	std::list<Product*>::iterator it;

	for (it = this->_inv.begin(); it != this->_inv.end(); it++) {
		if ((*it)->getName() == nameProd) {
			std::cout << "\nProduct " << nameProd << " was erased";
			this->_inv.erase(it);
			break;
		}
	}

}


