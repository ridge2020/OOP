/**
 * @file    ArrayWrapper.h
 * @brief   header file holding the ArrayWrapper class 
 *
 * has the class defintion and fucntion prototypes
 *
 * @author  ridge diffine
 * @date    2/4
 */
#ifndef ARRAYWRAPPER_H
#define ARRAYWRAPPER_H

class ArrayWrapper{
public:
    ArrayWrapper(int size);
    int get_size() const;
    int get(int index) const;
    void set(int index, int value);
    // More methods will be placed here...

    const static int max_capacity = 262144; // 1MiB max size (1MiB / sizeof(int))
private:
    int array[max_capacity];    // internal storage (partially-filled array)
    int size = 0;               // logical size (how many elements are used)
};

#endif