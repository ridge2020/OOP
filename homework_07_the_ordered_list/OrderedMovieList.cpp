/**
 * @file    OrderedMovieList.cpp    
 * @brief   this file includes fucntion defintions for 
 *          OrderedMovieList class
 *
 * Includes the definitons for the class OrderedMovieList.
 *
 * @author ridgediffine
 * @date    3/4
 */
#include<fstream>
#include"OrderedMovieList.h"

/**
 * @brief       This function will check if the list is 
 *              empty or not.
 *
 * @detailed    returns false if list is not empty
 * 
 *
 * @return  answer
**/    
bool OrderedMovieList::is_empty(){
    bool answer = true;
    if(head != nullptr){
        answer = false;
    }
    return answer;
}

/**
 * @brief       This function will erase the entire 
 *              LIST.
 *
 * @detailed    sets head to null and resets list
 *
**/  
void OrderedMovieList::erase(){
    head = nullptr;
}

/**
 * @brief       This function will remove the front node 
 *              in a list.
 *
 * @detailed    sets the head to it's own next.
**/  
void OrderedMovieList::remove_front(){
    head = head->get_next();
}

/**
 * @brief       This function will insert a node        
 *              alphabetically in a list
 *
 * @detailed    adds given node to a list
**/  
void OrderedMovieList::Insert(const Movie& movie){
    MovieNode* new_node = new MovieNode{movie};
    int end = 0;
    MovieNode* current = head;
    MovieNode* previous = nullptr;
    if(head != nullptr){
        while(current->get_next() != nullptr){
            if(new_node < current){
                previous = current;
                current = current->get_next();
            }
            else{
                end = 1;
                previous->set_next(new_node);
                new_node->set_next(current);
            }
        }
        if(end == 0){
           //previous->set_next(new_node);
           new_node->set_next(current);
        }      
   
    }
    else{
        head = new_node;
    }
   
    delete new_node;
    new_node = nullptr;
}

/**
 * @brief       This function will print each node's
 *              payloads info
 *
 * @detailed    prints the entire list
 * 
 *
 * @return  the out file
**/    
std::ostream& OrderedMovieList::write( std::ostream& fout ) const{
    MovieNode* current = head;
    while(current->get_next() != nullptr){
        current->get_payload().write(fout);
        current = current->get_next();
    }
    return fout;
}

/**
 * @brief       This function will print each node's
 *              payloads info using << operator
 *
 * @detailed    prints the entire list
 * 
 *
 * @return  the out file
**/
std::ostream& operator<<( std::ostream& fout, const OrderedMovieList& list ){
    list.write(fout);
    return fout;
}

