/**
 * @file    MovieNode.h
 * @brief   header file holding the MovieNode class 
 *
 * has the class defintion and fucntion prototypes
 *
 * @author  ridge diffine
 * @date    3/4
 */
#ifndef MOVIENODE_H
#define MOVIENODE_H
#include"Movies.h"

class MovieNode {
public:
    MovieNode( const Movie& new_movie ) : payload{new_movie} {};
    Movie          get_payload( ) const;
    MovieNode*     get_next( ) const;
    void          set_next( MovieNode* node );
    std::ostream& write( std::ostream& fout ) const;
    bool operator < ( const MovieNode& rhs ) const;

private:
    Movie      payload;
    MovieNode* next = nullptr;
};
std::ostream& operator<<( std::ostream& fout, const MovieNode& node );

#endif