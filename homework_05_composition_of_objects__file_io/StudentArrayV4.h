#ifndef STUDENTARRAYV4_H
#define STUDENTARRAYV4_H
#include"Student.h"
#include<fstream>
#include<iostream>
    using std::cout;

class StudentArrayV4 {  
public:
    StudentArrayV4( );
    ~StudentArrayV4( );
    void      add( const Student& new_student );
    int       read( std::istream& infile );
    std::ostream&  write( std::ostream& outfile) const;
    void      add_from( std::istream& infile );

private:
    Student*  _array            = nullptr;
    int       number_of_students = 0;
    int       physicalArraySize  = 0;
};

#endif