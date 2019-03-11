#include"IntNode.h"
#include"IntList.h"
#include"IntStack.h"
#include<iostream>
    using std::cout;
    using std::endl;
    
int main(){
    cout << "The Stack & the Class Template (in-lab portion)\n";
    IntNode int_item_1( 101 );
    IntNode int_item_2( 212 );
    cout << "test nodes: " << int_item_1 << ' ' << int_item_2 << "\n";
    int_item_1.set_next( &int_item_2 );
    cout << "test next:  " << int_item_1 << ' ' << int_item_2 << "\n\n";
    
    IntList list1;
    list1.add_front( 101 );
    list1.add_front( 212 );
    list1.add_front( 323 );
    list1.add_front( 434 );
    cout << "test list 101/212/323/434:\n" << list1 << "\n\n";
    
    int list_data_1;
    try {
        list_data_1 = list1.remove_front( );
        cout << "test list remove #1: " << list_data_1 << endl;
    } 
    catch (const std::length_error& ) { 
        cout << "test list remove #1 failed\n"; 
    }

    cout << "list is now:\n" << list1 << "\n";
    int list_data_2;
    try {
        list_data_2 = list1.remove_front( );
        cout << "test list remove #2: " << list_data_2 << endl;
    } 
    catch ( const std::length_error& ) { 
        cout << "test list remove #2 failed\n"; 
    }
    cout << "list is now:\n" << list1 << "\n\n";
        
     IntStack stack;
    stack.push( 101 );
    stack.push( 212 );
    stack.push( 323 );
    stack.push( 434 );
    cout << "test stack 101/212/323/434:\n" << stack << endl;

    int stack_data_1;
    try {
        stack_data_1 = stack.pop( );
        cout << "test stack pop #1: " << stack_data_1 << endl;
    }
    catch (const std::length_error& ) {
        cout << "test stack pop #1 failed\n"; 
    }

    cout << "stack is now:\n" << stack << endl;

    int stack_data_2;
    try {
        stack_data_2 = stack.pop( );
        cout << "test stack pop #2: " << stack_data_2 << endl;
    }
    catch (const std::length_error& ) {
        cout << "test stack pop #2 failed\n"; 
    }
    cout << "stack is now:\n" << stack << endl;   
    return 0;
}