/**
 * @file    OrderedMovieList.h
 * @brief   header file holding the OrderedMovieList class 
 *
 * has the class defintion and fucntion prototypes
 *
 * @author  ridge diffine
 * @date    3/4
 */
#ifndef ORDEREDMOVIELIST_H
#define ORDEREDMOVIELIST_H
#include<fstream>
#include"Movies.h"
#include"MovieNode.h"

class OrderedMovieList{
public:
    OrderedMovieList() = default;
    std::ostream& write( std::ostream& fout ) const;
    bool        is_empty();
    void        erase();
    void        remove_front();
    void        Insert(const Movie& movie);

private:
    MovieNode* head = nullptr;
};
std::ostream& operator<<( std::ostream& fout, const OrderedMovieList& list );

#endif
