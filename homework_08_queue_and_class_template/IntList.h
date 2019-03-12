#ifndef INTLIST_H
#define INTLIST_H
#include<fstream>
    using std::ostream;
#include"IntNode.h"

class IntList {
public:
    ~IntList();
    bool is_empty( ) const;
    void add_front( int newData );
    int  remove_front( );
    void debug_write( ostream& outfile ) const;
    IntNode* get_head(){return head;};
    IntNode* get_tail(){return tail;};
    void set_tail(IntNode* newTail){tail = newTail;};
    void set_head(IntNode* newhead){head = newhead;};

private:
    IntNode* head = nullptr;
    IntNode* tail = nullptr;
    IntList( const IntList& );
    IntList& operator=( const IntList& );
};
ostream& operator<<( std::ostream& outfile, const IntList& list );

#endif