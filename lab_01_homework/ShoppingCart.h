#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include "Item.h"
#include <vector>
#include <string>

class ShoppingCart {
public:
    // mutators
    void add(Item newItem);
    bool update_quantity(std::string name, int newQuantity);
    bool remove(std::string item);
    // accessor
    double total_value();
    // other methods
    void write();
    
private:
    std::vector<Item> items;
};


#endif
    