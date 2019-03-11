/**
 * @file   StringWrapper.h
 * @brief   holds the SuperThinArrayWrappers struct and ThinArrayWrapper struct
 *          and the protoptypes for functions.
 *
 *
 * @author  ridge diffine
 * @date    2/4
 */
#ifndef THINARRAYWRAPPER_H
#define THINARRAYWRAPPER_H

struct SuperThinArrayWrapper{
    int array[20];
};

struct ThinArrayWrapper{
    const static int size = 20;
    int array[size];
};

void print_array(SuperThinArrayWrapper array);
void print_array(ThinArrayWrapper array);
void fill_array_v0(ThinArrayWrapper array);
void fill_array_v1(ThinArrayWrapper& array3);
ThinArrayWrapper fill_array_v2();

#endif