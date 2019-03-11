/**
 *******************************************************************************
 * @file    main.cpp
 * @brief   All test code for for the functions contained
 *          in the included files.
 *
 * This code will test a series of different functions
 *  and classes.
 * 
 * 
 *
 * @remarks
 *      Course:        Computer Science nnnn, Fall/Spring yyyy
 *      Due Date:      2/12/19
 *      Instructor:    causey
 *
 * @author  ridge diffine
 * @date    2/12/19
 *******************************************************************************
**/
#include"ElasticArray.h"
#include<iostream>
using std::cout;
using std::endl;

int main(){
    ElasticArray this_requires_a_default_ctor(8);
    this_requires_a_default_ctor.push_back(9); 
    cout << this_requires_a_default_ctor.at(0) << endl;
    this_requires_a_default_ctor.push_back(7);
    cout << this_requires_a_default_ctor.at(1) << endl;
    cout << this_requires_a_default_ctor.front() << endl;
    cout << this_requires_a_default_ctor.back() << endl;
    this_requires_a_default_ctor.push_back(15);
    cout << this_requires_a_default_ctor.back() << endl;
    cout << this_requires_a_default_ctor.pop_back() << endl;
    //cout << this_requires_a_default_ctor.at(2);
    cout << this_requires_a_default_ctor.back() << endl;
    cout << this_requires_a_default_ctor.capacity() << endl;
    cout << this_requires_a_default_ctor.size() << endl;
    cout << this_requires_a_default_ctor.front() << endl;
    this_requires_a_default_ctor.shrink_to_fit();
    cout << this_requires_a_default_ctor.capacity() << endl;
    cout << this_requires_a_default_ctor.size() << endl;
    cout << this_requires_a_default_ctor.at(0) << endl;
    
    cout << this_requires_a_default_ctor.back() << endl;
    
    DynamicArray source_array{5};
    DynamicArray destination_array{5};

    for(int i = 0; i < source_array.size(); ++i){
        source_array.at(i) = (i + 1); // fills with {1,2,3,4,5}
    }  // Try to copy:
    destination_array = source_array;    // doesn't do what you want it to do...

    // change the supposed "copy":
    for(int i = 0; i < destination_array.size(); ++i){
        destination_array.at(i) *= 2;      // double all the values in the "copy"
    }

    // Now let's have a look at the original array. (It *should* be the same
    // as before... but is it?)
    std::cout << "Original array should be:\n";
    std::cout << "1\t2\t3\t4\t5\n";
    std::cout << "It is:\n";
    for(int i = 0; i < source_array.size(); ++i){
        std::cout << source_array.at(i) << '\t';
    }
    std::cout << std::endl;
    return 0;
}

