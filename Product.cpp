#include "Product.h"
#include <iostream>

Product::Product()
{
}

Product::Product(std::string name, float price, int quantity)
{
	this->_name = name;
	this->_price = price;
	this->_quantity = quantity;
}

Product::~Product()
{
}

std::string Product::getName()
{
	return this->_name;
}

void Product::setName(std::string name)
{
	this->_name = name;
}

float Product::getPrice()
{
	return this->_price;
}

void Product::setPrice(float price)
{
	this->_price = price;
}

int Product::getQuantity()
{
	return this->_quantity;
}

void Product::setQuantity(int quantity)
{
	this->_quantity = quantity;
}

void Product::displayProduct()
{
	std::cout << "\n\tName: " << this->getName();
	std::cout << "\n\t\t\tPrice: " << this->getPrice();
	std::cout << "\n\t\t\tQuantity: " << this->getQuantity();
}
