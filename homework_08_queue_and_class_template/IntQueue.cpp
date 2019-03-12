#include"IntQueue.h"
#include<stdexcept>
#include<fstream>
using std::ostream;

bool IntQueue::is_empty( ) const{
    bool answer = false;
    if(list.get_head() == nullptr){
        answer = true;
    }
    return answer;
}

void IntQueue::enqueue(int newData){
    IntNode* NewNode = new IntNode{newData};
    if(list.get_tail() != nullptr){
        list.get_tail()->set_next(NewNode);
        list.set_tail(NewNode);
    }
    else{
        list.set_head(NewNode);
        list.set_tail(NewNode);
    }
}

ostream& IntQueue::debug_write( ostream& outfile ) const{
    IntNode* current = list.get_head();
    if(list.get_head() == nullptr){
        throw std::length_error("List is empty");
    }
    while(current != nullptr){
        outfile << *current;
        current = current->get_next();
    }
    return outfile;
}

ostream& operator<<( std::ostream& outfile, const IntList& list ){
    list.debug_write(outfile);
    return outfile;
}

int IntQueue::dequeue(){
    int value = 0;
    if(list.get_head() == nullptr){
        throw std::length_error("List out of range");
    }
    else{
        IntNode* current = list.get_head();
        list.set_head(current->get_next());
        value = current->get_data();
        delete current;
        current = nullptr;
    }
    return value;
}