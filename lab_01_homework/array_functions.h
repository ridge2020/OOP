#ifndef ARRAY_FUNCTIONS_H
#define ARRAY_FUNCTIONS_H
#include<iostream>
#include"Rectangles.h"

void fill_random(int array_1[], int size){
    for(int i = 0; i < size; ++i){
        array_1[i] = rand() % 1000 + 1;
    }
}

double average(int array_1[], int size){
    double total, average;
    for(int i = 0; i < size; ++i){
        total =+ array_1[i];
    }
    average = total / size;
    return average;
}

void make_puzzle(char array_2D[][15], int range){
    for(int x = 0; x < range; ++x){
        for(int y = 0; y < range; ++y){
            array_2D[x][y] = static_cast<char>(rand() & 26 + 'a');
        }
    }
}

void print_puzzle(char array_2D[][15], int range){
    for(int x = 0; x < range; ++x){
        for(int y = 0; y < range; ++y){
            std::cout << array_2D[x][y] << ' ';
        }
        std::cout << std::endl;
    }
}

void print_rectangles(Rectangle array_rec[], int size){
        for(int i = 1; i < size + 1; ++i){
            std::cout << i << ": " << array_rec[i].get_length() << " x " << array_rec[i].get_width() << std::endl;
        }
}

#endif