/**
 * @file    Movies.cpp    
 * @brief   this file includes fucntion defintions for Movies 
 *          program
 *
 * Includes the definitons for the class Movies.h.
 *
 * @author ridgediffine
 * @date    2/4
 */
#include"Movies.h"
#include<iostream>
    using std::cout;
    using std::endl;
#include<fstream>
#include<string>
#include<stdio.h>
/**
 * @brief       This is constructor for movie class
 *
 * @detailed    will initalize all the attributes of the Movie
 *              class.
**/  
Movie::Movie(std::istream& infile){
    std::getline(infile, title,'|');
    infile >> year;
    infile.ignore(1);
    std::getline(infile, director, '|');
    std::getline(infile, rating);
}

/**
 * @brief       This function will write the current movie info.
 *
 * @detailed    writes out the info for movie 
 * 
 *
 * @return  outfile
**/  
void Movie::write( std::ostream& outfile ) const{
    outfile << title << " (" << year << ") " << rating 
            << " - " << director << endl;
}

/**
 * @brief       This function will write the current movie info.
 *
 * @detailed    writes out the info for movie using << operator.
 * 
 *
 * @return  outfile
**/    
std::ostream& operator<<( std::ostream& outfile, const Movie& movie ){
    movie.write(outfile);
    return outfile;
}