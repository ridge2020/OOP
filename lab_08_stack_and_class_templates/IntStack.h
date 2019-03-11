#ifndef INTSTACK_H
#define INTSTACK_H
#include<fstream>
    using std::ostream;
#include"IntList.h"
#include"IntNode.h"
 
class IntStack {
public:
    bool is_empty( ) const;
    void push( int operand );
    int  pop( );
    void debug_write( ostream& outfile ) const;

private:
    IntList list;
};
ostream& operator<<( ostream& outfile, const IntStack& stack );

#endif