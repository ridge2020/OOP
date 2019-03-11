#ifndef INTQUEUE_H
#define INTQUEUE_H
#include<fstream>
    using std::ostream;
#include"IntList.h"

class IntQueue {
public:
    bool is_empty( ) const;
    void enqueue( int newData );
    int  dequeue( );
    void debug_write( ostream& outfile ) const;

private:
    IntList list;
};
ostream& operator<<( std::ostream& outfile, const IntQueue& queue );

#endif