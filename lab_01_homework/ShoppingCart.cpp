#include "ShoppingCart.h"
#include <iomanip>
#include <iostream>
using std::endl;
using std::cout;
#include <string>
#include <vector>


std::vector<Item> items;
double totalprice;

void ShoppingCart::add(Item newItem){
    int size = items.size();
    for(int i = 0; i < size; ++i){
        if(items[i].get_name() == newItem.get_name()){
            if(items[i].get_price() == newItem.get_price()){
                items[i].set_quantity(newItem.get_quantity() + items[i].get_quantity());
                if(items[i].get_quantity() < 1){
                    items.erase(items.begin() + i);
                }
            }
        }
    }
    items.push_back(newItem);
}

bool ShoppingCart::update_quantity(std::string name, int newQuantity){
    int size = items.size();
    bool answer;
    answer = false;
    for(int i = 0; i < size; ++i){
        if(items[i].get_name() == name){
            items[i].set_quantity(newQuantity);
            answer = true;
            i = items.size();
            if(items[i].get_quantity() < 1){
                items.erase(items.begin() + i);
            }
        }
    }
    return answer;
}

bool ShoppingCart::remove(std::string item){
    int size = items.size();
    bool answer;
    answer = false;
    for(int i = 0; i < size; ++i){
        if(items[i].get_name() == item){
            items.erase(items.begin()+i);
            answer = true;
            i = items.size();
        }
    }
    return answer;
}

double ShoppingCart::total_value(){
    int size = items.size();
    double itemTotalPrice;
    for(int i = 0; i < size; ++i){
        itemTotalPrice = (items[i].get_quantity() * items[i].get_price());
        totalprice = totalprice + itemTotalPrice;
    }
    return totalprice;
}

void ShoppingCart::write(){
    int size = items.size();
    std::cout << std::fixed << std::setprecision( 2 );
    for(int i = 0; i < size; ++i){
        std::cout << "Name: " << items[i].get_name() << endl;
        std::cout << "Price: $  " << items[i].get_price() << endl;
        std::cout << "Quantity: " << items[i].get_quantity() << endl;
        std::cout << "Total Value: " << totalprice << endl;
        cout << endl;
    }  
}
    