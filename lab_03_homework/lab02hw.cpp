/**
 *******************************************************************************
 * @file    lab02HW.cpp
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
#include<iostream>
#include "ThinArrayWrapper.h"
#include "ArrayWrapper.h"
#include<stdexcept>

/**
 * @brief       The function will the contents of an array
 *
 * @detailed    will print the contents of an array that belons to the class SuperThinArrayWrapper
 *
 * @remarks
 *   
 *
 * @param        array      an object of SuperThinArrayWrapper class
 *
 *
 * @return  none
**/
void print_array(SuperThinArrayWrapper array){
    for(int i = 0; i < 20; ++i){
        std::cout << array.array[i] << ", ";
    }    
}

/**
 * @brief       The function will the contents of an array
 *
 * @detailed    will print the contents of an array that belons to the class ThinArrayWrapper
 *
 * @remarks
 *   
 *
 * @param        array       an object of ThinArrayWrapper class
 *
 *
 * @return  none
**/
void print_array(ThinArrayWrapper array){
    std::cout << std::endl;
    for(int i = 0; i < array.size; ++i){
        std::cout << array.array[i] << ", ";
    }    
}

/**
 * @brief       will an array with data
 *
 * @detailed  will fill an array of an object of 
 *              ThinArrayWrapper
 *
 *
 * @param       array     object of ThinArrayWrapper

 *
 * @return nothing
**/
void fill_array_v0(ThinArrayWrapper array){
    int element;
    for(int i = 0; i < array.size; ++i){
        std::cout << "Please enter a int for subscrpit " << i << " in array: ";
        std::cin >> element;
        array.array[i] = element;
    }    
}

/**
 * @brief       will an array with data
 *
 * @detailed  will fill an array of an object of 
 *              ThinArrayWrapper
 *
 *
 * @param       array     reference to object of ThinArrayWrapper

 *
 * @return nothing
**/
void fill_array_v1(ThinArrayWrapper& array3){
    int element;
    for(int i = 0; i < array3.size; ++i){
        std::cout << "Please enter a int for subscrpit " << i << " in array: ";
        std::cin >> element;
        array3.array[i] = element;
    }    
}

/**
 * @brief       will an array with data
 *
 * @detailed  will fill an array of an object of 
 *              ThinArrayWrapper
 *
 *
 * @return array object that was intiliazed
**/
ThinArrayWrapper fill_array_v2(){
    ThinArrayWrapper array;
    int element;
    for(int i = 0; i < array.size; ++i){
        std::cout << "Please enter a int for subscrpit " << i << " in array: ";
        std::cin >> element;
        array.array[i] = element;
    }
    return array;
}

int main(){
    SuperThinArrayWrapper array1;
    ThinArrayWrapper array2;
    ThinArrayWrapper array3;
    
    int tens = 10;
    for(int i = 0; i < 20; ++i){
        array1.array[i] = tens;
        tens = 10 * (i + 2);
    }
    tens = 10;
    for(int x = 0; x < array2.size; ++x){
        array2.array[x] = tens;
        tens = 10 * (x + 2);
    }
    
    ArrayWrapper array5(8);
    int element = 1;
    for(int i = 0; i < array5.get_size(); ++i){
        array5.set(i, element);
        element = element + 1;
    }
    
    print_array(array1);
    std::cout << std::endl;
    print_array(array2);
    std::cout << std::endl;
    fill_array_v0(array3);
    print_array(array3);
    std::cout << std::endl;
    fill_array_v1(array3);
    print_array(array3);
    array3 = fill_array_v2();
    print_array(array3);
    std::cout << std::endl << "this";
    std::cout << array5.get(3) << std::endl;
    std::cout << array5.get(4);
    std::cout << std::endl << "this";
    std::cout << array5.get(8);
    std::cout << array5.get(-1);
    
    ArrayWrapper catch_example_array{20};
    for(int i = 0; i < catch_example_array.get_size(); ++i){
        catch_example_array.set(i, (i+1));
    }
    int selected_index = 0;
    while(selected_index >= 0){
        std::cout << "Enter an index to print the item.  (-1 to stop): ";
        std::cin  >> selected_index;
        if(selected_index != -1){
            try{
                int value = catch_example_array.get(selected_index);
                std::cout << "The item at index " << selected_index
                          << " is " << value << '\n';
            }
            catch(std::out_of_range){
                std::cout << "The index " << selected_index 
                          << " is not a valid index.\n";
                std::cout << "Valid indices are 0 to "
                          << catch_example_array.get_size() - 1
                          << '\n';
                // Reset to allow the loop to continue if index was negative.
                selected_index = 0;  
            }
        }
    }
    
    //StringWrapper string("hello");
    
    return 0;
}