#include"StudentArrayV1.h"
#include"StudentArrayV2.h"
#include"StudentArrayV3.h"
#include<iostream>
    using std::cout;
    using std::cin;

int main(){
    StudentArrayV1 cs1114;

    cout << "contents of cs1114:\n";
    cs1114.write( );
    
    // version 2
    cout << "Enter the number of students for version 2: ";
    int number_of_students;
    cin >> number_of_students;

    StudentArrayV2 cs2114( number_of_students );
    cout << "contents of cs2114:\n";
    cs2114.write( );
    
    // version 3
    StudentArrayV3 cs2124;
    cout << "Enter Student data for version 3 (y/n)? ";
    char option;
    cin >> option;
    while ( option == 'y' || option == 'Y' ) {
        cs2124.add( );
        cout << "Enter more student data (y/n)? ";
        cin >> option;
    }
    cout << "contents of cs2124:\n";
    cs2124.write( );
    
    return 0;
}
