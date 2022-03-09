#pragma once

#include "Product.h"
#include <list>

class Inventory
{
private:
	std::list<Product*> _inv;

public:
	//Contructor and Destructor
	Inventory();
	~Inventory();

	//Utility functions
	void displayInventory();
	void addProduct(Product* newProd);
	void deleteProduct(std::string nameProd);
};

