#ifndef INTLIST_H
#define INTLIST_H
#include<fstream>
    using std::ostream;
#include"IntNode.h"

class IntList {
public:
    Intlist() = default;
    ~IntList();
    bool is_empty( ) const;
    void add_front( int newData );
    int  remove_front( );
    void debug_write( ostream& outfile ) const;

private:
    
};
ostream& operator<<( std::ostream& outfile, const IntQueue& queue );

#endif