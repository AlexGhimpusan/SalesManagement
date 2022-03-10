#include <iostream>
#include "Inventory.h"
#include "Product.h"

int main()
{
    Inventory* myInv = new Inventory();

    Product* p = new Product("Lapte", 5, 2);
    myInv->addProduct(p);

    p = new Product("Carne", 10, 3);
    myInv->addProduct(p);

    myInv->displayInventory();

    myInv->deleteProduct("Cartofi");
    myInv->displayInventory();

    myInv->deleteProduct("Carne");
    myInv->displayInventory();

}

