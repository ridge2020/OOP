/**
 * @file    Movie.h
 * @brief   header file holding the Movie class 
 *
 * has the class defintion and fucntion prototypes
 *
 * @author  ridge diffine
 * @date    3/4
 */
#ifndef MOVIES_H
#define MOVIES_H
#include<string>

struct Movie {
    std::string title;              /// Movie title
    unsigned short year;            /// Movie release year
    std::string director;           /// Director's name
    std::string rating;             /// Movie audience rating

    Movie( std::istream& infile );  /// construct given an input stream
    void write( std::ostream& outfile ) const;
};

std::ostream& operator<<( std::ostream& outfile, const Movie& movie );

#endif 