#include"Item.h"
#include<fstream>
#include<iostream>
#include<iomanip>

std::ostream& Item::write( std::ostream& fout ) const{
    fout << std::setw(30) << std::setiosflags(std::ios::left) << name << std::resetiosflags(std::ios::left) << " " << magic << " ";
    return fout;
}

std::ostream& operator<<( std::ostream& fout, const Item& item ){
    item.write(fout);
    return fout;
}