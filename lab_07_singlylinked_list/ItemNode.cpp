#include"ItemNode.h"
#include<iostream>
    using std::cout;
    using std::endl;

Item ItemNode::get_item() const{
    return payload;
}

ItemNode* ItemNode::get_next() const{
    return next;
}

void ItemNode::set_next(ItemNode* node){
    next = node;
}

std::ostream& ItemNode::write( std::ostream& fout ) const{
    get_item().write(fout);
    if(get_next() == nullptr){
        fout << "(" << "------" << ")" << endl;
    }
    else{
        fout << "(" << get_next()->payload.name << ")" << endl;
    }
    return fout;
}

std::ostream& operator<<( std::ostream& fout, const ItemNode& node ){
    node.write(fout);
    return fout;
}