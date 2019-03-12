#include"IntList.h"
#include<stdexcept>

IntList::~IntList(){
    IntNode* current = head;
    while(current != nullptr){
        head = current->get_next();
        delete current;
        current = head;
    }
}

bool IntList::is_empty( ) const{
    bool answer = false;
    if(head == nullptr){
        answer = true;
    }
    return answer;
}

void IntList::add_front(int newData){
    IntNode* NewNode = new IntNode{newData};
    NewNode->set_next(head);
    head = NewNode;
}

void IntList::debug_write( ostream& outfile ) const{
    IntNode* current = head;
    while(current != nullptr){
        outfile << *current;
        current = current->get_next();
        
    }
}

ostream& operator<<( std::ostream& outfile, const IntList& list ){
    list.debug_write(outfile);
    return outfile;
}

int IntList::remove_front(){
    int value = 0;
    if(head == nullptr){
        throw std::length_error("List out of range");
    }
    else{
        IntNode* current = head;
        head = current->get_next();
        value = current->get_data();
        delete current;
        current = nullptr;
    }
    return value;
}