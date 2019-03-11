#include "ShoppingCart.cpp"
#include "ShoppingCart.h"
#include "Item.h"
#include "Item.cpp"
#include<vector>

Item object1( "nachos", 2.50, 2 );
Item object2( "taco", 3.50, 1 );
Item object3( "burrito", 4.50, 3 );
Item object4( "chimichanga", 5.00, 3 );
Item object5( "nachos",  3.50,  0 );
Item object6( "nachos", 2.00,  -2 );
Item object7( "nachos", 2.00,  1 );

int main(){
    ShoppingCart cart1;
    
    cart1.write();
    cart1.add(object1);
    cart1.add(object2);
    cart1.add(object3);
    cart1.add(object4);
   
    
    cart1.update_quantity("nachos", 7);
    cart1.write();
    cart1.update_quantity("nachos", -8);
    cart1.total_value();
    cart1.write();
    
    
    
    
    
    return 0;
}