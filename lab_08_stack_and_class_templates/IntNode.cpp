#include"IntNode.h"
#include<iostream>
    using std::endl;
#include<fstream>

IntNode::IntNode(int new_value){
    payload = new_value;    
}

int IntNode::get_data() const{
    return payload;
}

IntNode* IntNode::get_next() const{
    return next;
}

void IntNode::set_next(IntNode* node){
    next = node;
}

void IntNode::debug_write( std::ostream& outfile ) const{
    if(next == nullptr){
        outfile << payload << "(-> / )" << endl;
    }
    else{
        outfile << payload << "(->" << next->payload << ")" << endl;
    }
}

std::ostream& operator<<( std::ostream& outfile, const IntNode& node ){
    node.debug_write(outfile);
    return outfile;
}