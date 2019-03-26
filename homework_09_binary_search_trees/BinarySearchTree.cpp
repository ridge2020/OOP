/**
 * @file BinarySearchTree.cpp
 *
 * Defines a functions in BinarySearchtree.h
 * 
 */
#include"BinarySearchTree.h"
#include<iostream>
    using std::endl;
    using std::cout;
#include<stack>

 /**
* adds a allocated node iteratively
* 
* @param  node information
* @return   nothing
*/
void BinarySearchTree::add_iteratively( const CityStateZip& new_city){
    CSZNode* new_node = new CSZNode{new_city};
    if(root == nullptr){
        root = new_node;
    }
    else{
        CSZNode* current  = root;
        CSZNode* previous = nullptr;
        while (current != nullptr) {
            previous = current;
            if (*new_node < *current)
                current = current->get_left();
            else  // *new_node > *current
                current = current->get_right();
        }
        if (*new_node < *previous)
            previous->set_left (new_node);
        else  // *new_node > *previous
         previous->set_right (new_node);
    }
}

/**
* writes the city, state and zip to the specified stream in 
* a standard format recursively
* 
* @param  strm the output stream to write to
* @param current root
* @return      nothing
*/
void BinarySearchTree::write_recursively( std::ostream& strm, CSZNode* current_root ) const{
    if(current_root != nullptr){
        write_recursively(strm ,current_root->get_left());
        current_root->write(strm);
        cout << endl;
        write_recursively(strm, current_root->get_right());
    }
}

  /**
* calls the pirvate write fucntion
* 
* @param  strm the output stream to write to
* @return      nothing
*/  
void BinarySearchTree::write_recursively(std::ostream& strm ) const{
    write_recursively(strm, root);
}

 /**
* adds a node recursively 
* 
* @param  strm the output stream to write to
* @param CSZnode
* @return      `strm` is returned to allow chaining
*/
void BinarySearchTree::add_recursively( CSZNode* new_node, CSZNode* current_root ){
    CSZNode* current;
    
    if(current_root == nullptr){
        current_root = new_node;
    }
    else{
        if(new_node < current_root){
            current = current_root->get_left();
            add_recursively(new_node, current);
        }
        else{
            current = current_root->get_right();
            add_recursively(new_node, current);
        }
    }
}


 /**
* calls the private add function
* 
* @param  strm the output stream to write to
* @return      nothing
*/
void BinarySearchTree::add_recursively( const CityStateZip& new_city ){
    CSZNode* new_node = new CSZNode{new_city};
    if(root == nullptr){
        root = new_node;
    }
    else{
        add_recursively(new_node, root);
    }
}

/**
* writes the city, state and zip to the specified stream in 
* a standard format iteratively dowen the tree
* 
* @param  strm the output stream to write to
* @return      nothing
*/
void BinarySearchTree::write_iteratively( std::ostream& strm ) {
    if(root != nullptr){
        std::stack<CSZNode*> s; 
        CSZNode* curr = root; 
        while (curr != nullptr || s.empty() == false){ 
            while (curr !=  nullptr){ 
                s.push(curr); 
                curr = curr->get_left(); 
            } 
            curr = s.top(); 
            s.pop(); 
            cout << curr->get_data() << endl; 
            curr = curr->get_right();
        }
    }
    else{
        cout << "list is empty";
    }
}

/**
erases all nodes recursively
* 
* 
* @return      nothing
*/
void     BinarySearchTree::erase_recursively(){
    erase_recursively(root);
}

/**
* erases all nodes recursively
* 
* @param  current roo
* @return      nothing
*/
void BinarySearchTree::erase_recursively(CSZNode* currentRoot){
    if(currentRoot->get_left() != nullptr){
    erase_recursively(currentRoot->get_left());
    }
    if(currentRoot->get_right() != nullptr){
    erase_recursively(currentRoot->get_right());
    }
    delete currentRoot;
    root = nullptr;
}

BinarySearchTree::~BinarySearchTree(){
    erase_recursively(root);
}