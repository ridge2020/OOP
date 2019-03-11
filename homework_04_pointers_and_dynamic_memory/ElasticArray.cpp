/**
 * @file    ElasticArray.cpp    
 * @brief   this file includes fucntion defintions for class ElasticArray main program
 *
 * Includes the definitons for the class ArrayWrapper.
 *
 * @author ridgediffine
 * @date    2/4
 */
#include<iostream>
    using std::cout;
    using std::endl;
    #include<stdexcept>
#include"ElasticArray.h"

ElasticArray::ElasticArray(int size){
    this-> _max_size = size; //current max size
    this->_size = 0;       //the amount of elements in array
    if(size > 0){
        _array = new int[_max_size];
    }
    
}

ElasticArray::~ElasticArray(){
    delete [] _array;
}

/**
 * 
 * @brief       This function will get the value stored at
 *              at a location
 *
 * @detailed    This function take an int parameter 
 *              and will retunr the value at that index;.
 *
 *
 * para@ int i the index of desired value
 *
 * @return  size the value at the specific index
**/    
int& ElasticArray::at(int i){
    if(i < 0 || i >= _size){
        throw std::out_of_range{"Array index out of range."};
    }
    return _array[i];
}

/**
 * 
 * @brief       This function will add a int to the back of
 *              an array in the ElaticArray class.
 *
 * @detailed    This function take an int parameter 
 *              then the function will check to see if
 *              the array is large enought o hold value 
 *              and will double arrays size if not
 *
 *
 * para@ int value - the vlaue to be added
 *
 * @return  nothing
**/    
void ElasticArray::push_back(int value){
    
    if(_max_size == _size){
        if(_max_size <= 0){
            _max_size = 16;
        }
        _max_size = _max_size * 2;
    }
    _array[_size] = value;
    _size = _size + 1;
}

/**
 * 
 * @brief       This function will access the value at the
 *              back of _array.
 *
 * @detailed    this function will throw out of range if the 
 *              the array is not filled or will retuen the 
 *              last value in _array.
 *
 *
 *
 * @return  last value in array
**/  
int ElasticArray::back() const{
    if(_size == 0){
        throw std::out_of_range{"Array index out of range."};
    }
    return _array[(_size-1)];
}

/**
 * 
 * @brief      This function will access the value at the
 *              front of _array.
 *
 * @detailed    this function will throw out of range if the 
 *              the array is not filled or will return the 
 *              front value in _array.
 *
 *
 *
 * @return  first value in array
**/  
int ElasticArray::front() const{
    if(_size == 0){
        throw std::out_of_range{"Array index out of range."};
    }
    return _array[0];
}

/**
 * 
 * @brief      This function will access the value at the
 *             back of the _array and retun the value and 
 *             delete it from the array.
 *
 * @detailed    this function will return the last value
 *              then will reduce _size by 1 deleting the last            value from the _array.
 *
 *
 *
 * @return  last value in _array
**/  
int ElasticArray::pop_back(){
    if(_size == 0){
        throw std::out_of_range{"Array index out of range."};
    }
    _size = _size -1;
     return _array[_size];
}

/**
 * 
 * @brief      This function will access the value at the
 *             back of the _array and retun the value and 
 *             delete it from the array.
 *
 * @detailed    this function will return the last value
 *              then will reduce _size by 1 deleting the last            value from the _array.
 *
 *
 *
 * @return  last value in _array
**/ 
void ElasticArray::shrink_to_fit(){
    if(_size == 0){
        delete [] _array;
        _array = nullptr;
        _max_size = 0;
    }
    else{
        int array1[_size];
        for(int i = 0; i < _size; ++i){
            array1[i] = _array[i];
        }
        delete [] _array;
        _array = array1;
        _max_size = _size;
        }
}

const ElasticArray& operator=(const ElasticArray&){
    delete [] 
}