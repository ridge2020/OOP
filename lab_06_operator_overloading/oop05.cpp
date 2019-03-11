#include"Fraction.h"

#include<iostream>
    using std::cout;
    using std::endl;

int main(){
    Fraction f1 {3, 5};
    cout << "f1: ";
    f1.write();
    cout << endl;
    
    Fraction f2 = f1.add(2);
    cout << "f2: ";
    f2.write();
    cout << endl;
 
    Fraction f3 = f1.operator+(2);
    cout << "f3: ";
    f3.write();
    cout << endl;
    
    Fraction f4 = f1 + 2;
    cout << "f4: ";
    f4.write();
    cout << endl;
    
    cout << "f1 + f2: ";
    Fraction f5 = f1 + f2;
    f5.write();
    cout << endl;
    
    cout << "f2 + f1: ";
    Fraction f6 = f2 + f1;
    f6.write();
    cout << endl;
    
    cout << "f1 + f2 + f3: ";
    Fraction f7 = f1 + f2 + f3;
    f7.write();
    cout << endl;
    
    cout << " 1 + f1:      ";
    Fraction f8 = 1 + f1;
    f8.write();
    cout << endl;
    
    cout << "f1 (w/ <<):   " << f1 << endl;
    return 0;
}