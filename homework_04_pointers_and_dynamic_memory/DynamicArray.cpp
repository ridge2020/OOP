#include<iostream>
    using std::cout;
    using std::endl;
    #include<stdexcept>
#include"DynamicArray.h"

DynamicArray::DynamicArray(int size){
    this->  _size = size;
    if(size > 0){
        _array = new int[_size];
    }
    
}

DynamicArray::~DynamicArray(){
    delete [] _array;
}

int& DynamicArray::at(int i){
    if(i < 0 || i >= _size){
        throw std::out_of_range{"Array index out of range."};
    }
    return _array[i];
}
