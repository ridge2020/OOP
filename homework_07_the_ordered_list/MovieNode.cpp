/**
 * @file    MovieNode.cpp    
 * @brief   this file includes fucntion defintions for MovieNode
 *          class.
 *
 * @author ridgediffine
 * @date    2/4
 */
#include"MovieNode.h"
#include<iostream>
    using std::cout;
    using std::endl;

/**
 * @brief       This function will return the node's payload
 *
 * @detailed    This function is class function
 *              that returns the nodes current payload.
 *
 *
 * 
 *
 * @return  payload
**/    
Movie MovieNode::get_payload() const{
    return payload;
}

/**
 * @brief       This function will return the node's next
 *
 * @detailed    This function is class function
 *              that returns the nodes current next.
 *
 *
 * 
 *
 * @return  next
**/  
MovieNode* MovieNode::get_next() const{
    return next;
}

/**
 * @brief       This function iwll set a nodes next.
 *
 * @detailed    This function will set or change the current
 *              pointer called next.
 *
**/    
void MovieNode::set_next(MovieNode* node){
    next = node;
}

/**
 * @brief       This function will write the current paload
 *              and the name of the next nodes payload.
 *
 * @detailed    writes out the info for movie and the next 
 *              movies title on same line.
 * 
 *
 * @return  fout
**/  
std::ostream& MovieNode::write( std::ostream& fout ) const{
    get_payload().write(fout);
    if(get_next() == nullptr){
        fout << "(" << "------" << ")" << endl;
    }
    else{
        fout << "(" << get_next()->payload.title << ")" << endl;
    }
    return fout;
}

/**
 * @brief       This function will write the current paload
 *              and the name of the next nodes payload using
 *              an operator.
 *
 * @detailed    writes out the info for movie and the next 
 *              movies title on same line.
 * 
 *
 * @return  fout
**/  
std::ostream& operator<<( std::ostream& fout, const MovieNode& node ){
    node.write(fout);
    return fout;
}

/**
 * @brief       This function will compare itself to the 
 *              given movie node tile.
 * @detailed    if the node given is albetically inferior
 *              it will return false.
 * 
 *
 * @return  answer;
**/  
bool MovieNode::operator < ( const MovieNode& rhs ) const{
    bool answer = true;
    if(get_payload().title >= rhs.get_payload().title){
        answer = false;
    }
    return answer;
}