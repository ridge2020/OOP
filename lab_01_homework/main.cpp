#include<iostream>
#include<cstdlib>
#include"array_functions.h"
#include"Rectangles.h"
#include<string>
#include"c_string_utils.h"


class Rectangle{
public:
    Rectangle() = default;                              // Use implicit defaults from initializers
    Rectangle(int l, int w) : length{l}, width{w} {  }  // or instantiate with dimensions.
    void set_length(int l)  { length = l;            }  // Thin mutators for the length
    void set_width (int w)  { width  = w;            }  // and width.  Better ones would validate!
    int  get_length() const { return length;         }  // Inline accessors for length,
    int  get_width () const { return width;          }  // width
    int  get_area  () const { return length * width; }  // and area.

private:
    int length = 1;                                     // length and width default to 1
    int width  = 1;                                     // to create a "unit square"
};

int main(){
    srand(42);
    int array_1[100];
    int array_2D[15][15];
    Rectangle array_rec[20];
    char c_string[] = "hello";
    fill_random(array_1[100], 100);
    average(array_1[100], 100);
    make_puzzle(array_2D[15][15], 15);
    print_puzzle(array_2D[15][15], 15);
    //print_rectangles(array_rec[20]);
    
    char state[]{ "Arkansas" };
    std::cout << state << " has " << strlen(state)
              << " (logical) characters and occupies "
              << sizeof(state) << " bytes.\n";
              
    my_strlen(c_string[6]);
    
    return 0;
}