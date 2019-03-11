/**
 * @file    ArrayWrapper.cpp    
 * @brief   this file includes fucntion defintions for main program
 *
 * Includes the definitons for the class ArrayWrapper.
 *
 * @author ridgediffine
 * @date    2/4
 */
#include "ArrayWrapper.h"
#include<stdexcept>

ArrayWrapper::ArrayWrapper(int size){
       this->size   = size;
    }
    
/**
 * @brief       This function will get the size of an array
 *
 * @detailed    This function will get the size of an array
 *              that belong to an obkect of the ArrayWrapper class
 *
 *
 * 
 *
 * @return  size the size of the array
**/    
int ArrayWrapper::get_size( ) const{
    return size;
}

/**
 * @brief       This function will set a inidividule element in an 
 *              array.
 *
 * @detailed    This function will set a inidividule element in an 
 *              array of an object in the ArrayWrapper class
 *
 *
 * @param        index    location in array
 * @param        value     value to change too
 *
 *
 * @return  none
**/
void ArrayWrapper::set(int index, int value){
    if(index < 0 || index >= this->size){
        throw std::out_of_range{"Array index out of bounds."};
    }
    array[index] = value;
}

/**
 * @brief      This function will get the calue of a element in 
 *              AN ARRAY.
 *
 * @detailed   This function will get the calue of a element in 
 *              AN ARRAY of an object of the ArrayWrapper class.
 *
 
 * @param        int index     indice of element wanted to change
 * 
 *
 * @return  If the function returns a value, explain what the value is and
 *          how it might be used here.
**/
int ArrayWrapper::get(int index) const{
    if(index < 0 || index >= this->size){
        throw std::out_of_range{"Array index out of bounds."};
    }
    int value;
    value = array[index];
    return value;
}

