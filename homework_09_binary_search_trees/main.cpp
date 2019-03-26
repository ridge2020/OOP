/**
 *******************************************************************************
 * @file    main.cpp
 * @brief   All test code for for the functions contained
 *          in the included files.
 *
 * This code will test a series of different functions
 *  and classes suing binary search trees
 * 
 * 
 *
 * @remarks
 *      Course:        Computer Science 2124, Spring 2019
 *      Due Date:      3/25/19
 *      Instructor:    causey
 *
 * @author  ridge diffine
 * @date    3/25/19
 *******************************************************************************
**/
#include"CSZNode.h"
#include"CityStateZip.h"
#include"BinarySearchTree.h"
#include<limits>
#include<iostream>
    using std::cout;
    using std::endl;
    using std::cin;

CityStateZip read_CityStateZip( std::istream& fin ) {
        std::string  city, state;
        unsigned int zip = 0;
        getline( fin, city, ',' );
        getline( fin, state, ',' );
        fin >> zip;
        fin.ignore( std::numeric_limits<std::streamsize>::max( ), '\n' );
        CityStateZip new_csz{city, state, zip};
        return new_csz;
}
    
int main(){
    std::ifstream fin{"city_list.txt"};
    if ( !fin ) {
    cout << "Error opening city_list.txt!\n";
    exit( 1 );
    }

    CSZNode n1{read_CityStateZip( fin )};
    CSZNode n2{read_CityStateZip( fin )};

    cout << "test CSZNodes:\n";
    cout << n1 << endl;
    cout << n2 << endl;
    cout << endl;
    
    cout << "Press <enter> to continue...\n";
    cin.get();
    BinarySearchTree city_tree;

    fin.clear();   // restore stream state so I/O may proceed
    fin.seekg(0);  // seek "get" to file start (byte #0)

    while (fin.good())
        city_tree.add_iteratively(read_CityStateZip(fin));
    cout << "Recursive Tree Listing of Iterative Additions\n";
    city_tree.write_recursively(cout);
    cout << endl;
    
    cout << "Press <enter> to continue...\n";
    cin.get();
    city_tree.erase_recursively();
    cout << "Iterative Tree Listing After Erase:\n";
    city_tree.write_iteratively(cout);
    cout << "<end of tree output>\n\n";

    fin.clear();    // restore stream state so I/O may proceed
    fin.seekg(0);   // seek "get" to file start (byte #0)

    while (fin.good())
        city_tree.add_recursively(read_CityStateZip(fin));// recursive add
    cout << "Iterative Listing of Recursive Additions\n";
    city_tree.write_recursively(cout);
    city_tree.write_iteratively(cout);
    fin.close();
    
    
    
    
    
    
    return 0;
}