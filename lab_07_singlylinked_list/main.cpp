#include<fstream>
#include<iostream>
    using std::endl;
#include"ItemNode.h"
#include"Item.h"
int main(){
    std::ofstream dbg{"debug.txt"};  // open a file named debug.txt
    Item test_item{"Great Sword", 1};
    dbg << "test item: \n" << test_item << "\n" << std::endl;
    
    ItemNode test_node_1{ Item{"Amulet of Feasting", 2} };
    dbg << "test game item node: \n" << test_node_1 << "\n" << endl;
    
    ItemNode test_node_2{ Item{"Potion of Fire Walking", 3} };
    test_node_1.set_next( &test_node_2 );
    dbg << "test 2 items: \n" << test_node_1 << "\n"
        << test_node_2 << endl;
    ItemList inventory1;

    inventory1.add_front( Item{"Stone Shield", 1} );
    inventory1.add_front( Item{"Potion of Health", 1} );    
        
    return 0;
}