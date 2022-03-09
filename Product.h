#pragma once

#include <string>

//using namespace std;     -> uncomment this if you don't want to use "std::"

class Product {
private:
	std::string _name;
	float _price;
	int _quantity;

public:
	//Constructors and Destructor
	Product();
	Product(std::string name, float price, int quantity);
	~Product();

	//Setters and Getters
	std::string getName();
	void setName(std::string name);

	float getPrice();
	void setPrice(float price);

	int getQuantity();
	void setQuantity(int quantity);
};