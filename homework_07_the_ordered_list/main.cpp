/**
 *******************************************************************************
 * @file    main.cpp
 * @brief   All test code for for the functions contained
 *          in the included files.
 *
 * This code will test a series of different functions
 *  and classes.
 * 
 * I couldnt get the c-stirng files to compile, so for grading it would 
 * be easier to compile wihtout them.
 *
 * @remarks
 *      Course:        Computer Science nnnn, Fall/Spring yyyy
 *      Due Date:      2/4/19
 *      Instructor:    causey
 *
 * @author  ridge diffine
 * @date    1/6/19
 *******************************************************************************
**/
#include"Movies.h"
#include"MovieNode.h"
#include"OrderedMovieList.h"
#include<fstream>
#include<iostream>
    using std::cout;

int main(){
    std::ifstream infile;
    infile.open("movies.txt");
    Movie movie(infile);
    std::ofstream outfile;
    outfile.open("MoviesTest.txt");
    movie.write(outfile);
    
    MovieNode test_node{movie};
    test_node.write(outfile);
    
    OrderedMovieList movie_list;
    std::ifstream    movie_db {"movies.txt"};
    if( movie_db ) {
        while ( movie_db.good() ) {
        movie_list.Insert( Movie{movie_db} ); 
        }
    movie_db.close();
    cout << "Alphabetical listing of movies available:\n"
         << movie_list << "\n\n";
    }
    else{
        cout << "file not found!\n";
    }
    
    return 0;
}