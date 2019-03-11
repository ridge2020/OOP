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
 *      Course:        Computer Science 2124
 *      Due Date:      2/12/19
 *      Instructor:    causey
 *
 * @author  ridge diffine
 * @date    2/26/19
 *******************************************************************************
**/

#include"Fraction.h"
#include<iostream>
    using std::cout;
    using std::endl;

int main(){
    Fraction fraction1(5, 15);
    fraction1.write();
    if(fraction1.get_denominator() != 3 && fraction1.get_numerator() != 1){
        cout << "reduce failed" << endl;
    }
    else{
        cout << "reduce success" << endl;
    }
    fraction1 = -fraction1;
    if(fraction1.get_numerator() > 0){
        cout << "nagtive failed" << endl;
    }
    else{
        cout << "negative success" << endl;
    }
    fraction1 = -fraction1;
    Fraction fraction2(1,3);
    fraction2.write();
    fraction1 = fraction1 + fraction2;
    if(fraction1.get_numerator() != 2){
        cout << "addition between fraction failed" << endl;
        fraction1.write();
    }
    else{
        cout << "additon betwen fractions success" << endl;
    }
    int i1 = 3, i2 = -2;
    
    fraction1.write();
    cout << " + ";
    fraction2.write();
    cout << " = ";
    (fraction1 + fraction2).write();
    cout << endl;
    fraction1.write();
    cout << " + " << i1 << " = ";
    (fraction1 + i1).write();  
    cout << endl << "success" << endl;
    
    
    cout << endl;
    fraction1.write();
    cout << " - ";
    fraction2.write();
    cout << " = ";
    (fraction1 - fraction2).write();
    cout << endl;
    fraction1.write();
    cout << " - " << i1 << " = ";
    (fraction1 - i1).write();  
    cout << endl << "success" << endl;
    
    cout << endl;
    fraction1.write();
    cout << " * ";
    fraction2.write();
    cout << " = ";
    (fraction1 * fraction2).write();
    cout << endl;
    fraction1.write();
    cout << " * " << i1 << " = ";
    (fraction1 * i1).write();  
    cout << endl << "success" << endl;
    
    cout << endl;
    fraction1.write();
    cout << " / ";
    fraction2.write();
    cout << " = ";
    (fraction1 / fraction2).write();
    cout << endl;
    fraction1.write();
    cout << " / " << i1 << " = ";
    (fraction1 / i1).write();  
    cout << endl << "success" << endl;
    
    cout << endl;
    fraction1.write();
    cout << " < ";
    fraction2.write();
    cout << " = " << (fraction1 < fraction2) << endl;
    cout << endl;
    fraction1.write();
    cout << " < " << i2 << " = " << (fraction1 < i2) << endl;
    cout << endl << "success" << endl;
    
    cout << endl;
    fraction1.write();
    cout << " > ";
    fraction2.write();
    cout << " = " << (fraction1 > fraction2) << endl;
    cout << endl;
    fraction1.write();
    cout << " > " << i2 << " = " << (fraction1 > i2) << endl;
    cout << endl << "success" << endl;
    
    cout << endl;
    fraction1.write();
    cout << " <= ";
    fraction2.write();
    cout << " = " << (fraction1 <= fraction2) << endl;
    cout << endl;
    fraction1.write();
    cout << " <= " << i2 << " = " << (fraction1 <= i2) << endl;
    cout << endl << "success" << endl;
    
    cout << endl;
    fraction1.write();
    cout << " >= ";
    fraction2.write();
    cout << " = " << (fraction1 >= fraction2) << endl;
    cout << endl;
    fraction1.write();
    cout << " >= " << i2 << " = " << (fraction1 >= i2) << endl;
    cout << endl << "success" << endl;
    
    cout << endl;
    fraction1.write();
    cout << " == ";
    fraction2.write();
    cout << " = " << (fraction1 == fraction2) << endl;
    cout << endl;
    fraction1.write();
    cout << " == " << i2 << " = " << (fraction1 == i2) << endl;
    cout << endl << "success" << endl;
    
    cout << endl;
    fraction1.write();
    cout << " != ";
    fraction2.write();
    cout << " = " << (fraction1 != fraction2) << endl;
    cout << endl;
    fraction1.write();
    cout << " != " << i2 << " = " << (fraction1 != i2) << endl;
    cout << endl << "success" << endl;
    
    return 0;
}