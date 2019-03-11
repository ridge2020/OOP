/**
 * @file    Fraction.cpp    
 * @brief   this file includes fucntion defintions for all 
 *          Fraction class functions and gcd function.
 *
 * Includes the definitons for the class Fraction.
 *
 * @author ridgediffine
 * @date    2/4
 */
#include"Fraction.h"
#include<stdexcept>
#include<cmath>
#include<iostream>
    using std::cout;
    using std::endl;

Fraction::Fraction(int n, int d){
    this->numerator = n;
    if(d == 0){
        throw std::overflow_error{"Demoninator can't be 0"};
    }
    this->denominator = d;
    reduce();
}

/**
 * function for writing fraction to file or cout if file not 
 * provided
 *          
 *
 * @return Fraction object
 */
void Fraction::write(std::ostream&) const{
    cout << numerator << "/" << denominator << endl;
}

/**
 * function for adding int to a Fraction object
 *          
 *
 * @return Fraction object
 */
Fraction Fraction::add(int i) const{
    int n, d;
    n = numerator + (denominator * i);
    d = denominator;
    
    return Fraction(n, d);
}

/**
 * function for finding greatest
 * common factor using two ints as
 * a parameter.
 *          
 *
 * @return Fraction object
 */
int gcd(int a, int b) {
    int remainder;

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

void Fraction::reduce(){
    int greatestCF = gcd(numerator, denominator);
    numerator = numerator/greatestCF;
    denominator = denominator/greatestCF;
    if(denominator < 0){
        numerator = -numerator;
        denominator = std::abs(denominator);
    }
}

/**
 * uniary - operator for converting Fraction
 *          to a negative fraction, by changing numerator.
 *
 * @return Fraction object
 */
Fraction Fraction::operator-(){
    int n, d;
    n = numerator;
    d = denominator;
    if(n != 0){
        n = -n;
    }
    return Fraction(n, d);
}

/**
 * binary - operator for subtraction between
 * two Fraction objects.
 *
 * @return Fraction object
 */
Fraction Fraction::operator-(Fraction& f) const{
    int n, d;
    d = denominator * f.denominator;
    n = (numerator * denominator) - (f.numerator * denominator);
    return Fraction(n, d);
}

/**
 * binary - operator for subtraction between
 * a fraction on the left and int on the right
 *
 * @return Fraction object
 */
Fraction Fraction::operator-(int i) const{
    int n, d;
    d = denominator;
    n = numerator - (denominator * i);
    return Fraction(n, d);
}

/**
 * binary - operator for multiplication between
 * two Fraction objects.
 *
 * @return Fraction object
 */
Fraction Fraction::operator*(Fraction& f) const{
    int n, d;
    d = denominator * f.denominator;
    n = numerator * f.numerator;
    return Fraction(n, d);
}

/**
 * binary - operator for multiplication between
 * a Fraction object and a int on the right.
 *
 * @return Fraction object
 */
Fraction Fraction::operator*(int i) const{
    int n, d;
    d = denominator;
    n = numerator * i;
    return Fraction(n, d); 
}
/**
 * binary - operator for division between
 * a Fraction object and another fraction ogject.
 *
 * @return Fraction object
 */
Fraction Fraction::operator/(Fraction& f) const{
    int n, d;
    d = denominator * f.numerator;
    n = numerator * f.denominator;
    return Fraction(n, d);
}

/**
 * binary - operator for division between
 * a Fraction object on left and a int on the right.
 *
 * @return Fraction object
 */
Fraction Fraction::operator/(int i) const{
    int n, d;
    d = denominator * i;
    n = numerator;
    return Fraction(n, d);
}

/**
 * binary - operator for lesser than 
 * for a Fraction object on left and a fraction object on the right.
 *
 * @return Fraction object
 */
bool Fraction::operator<(Fraction& f){
    int n, d, n2;
    bool answer = true;
    d = denominator * f.denominator;
    n = numerator * denominator;
    n2 = f.numerator * denominator;
    if(n2 <= n){
        answer = false;
    }
    return answer;
}

/**
 * binary - operator for lesser than 
 * for a Fraction object on left and a int  on the right.
 *
 * @return Fraction object
 */
bool Fraction::operator<(int i){
    int n, d, nI;
    bool answer = true;
    d = denominator;
    n = numerator;
    nI = i * denominator;
    if(nI <= n){
        answer = false;
    }
    return answer; 
}

/**
 * binary - operator for greater than 
 * for a Fraction object on left and a fraction object on the right.
 *
 * @return Fraction object
 */
bool Fraction::operator>(Fraction& f){
    int n, d, n2;
    bool answer = true;
    d = denominator * f.denominator;
    n = numerator * denominator;
    n2 = f.numerator * denominator;
    if(n2 >= n){
        answer = false;
    }
    return answer;
}

/**
 * binary - operator for greater than 
 * for a Fraction object on left and a int on the right.
 *
 * @return Fraction object
 */
bool Fraction::operator>(int i){
    int n, d, nI;
    bool answer = true;
    d = denominator;
    n = numerator;
    nI = i * denominator;
    if(nI >= n){
        answer = false;
    }
    return answer; 
}

/**
 * binary - operator for lesser than or equal 
 * for a Fraction object on left and a fraction object the right.
 *
 * @return Fraction object
 */
bool Fraction::operator<=(Fraction& f){
    int n, d, n2;
    bool answer = true;
    d = denominator * f.denominator;
    n = numerator * denominator;
    n2 = f.numerator * denominator;
    if(n2 < n){
        answer = false;
    }
    return answer;
}

/**
 * binary - operator for lesser than or equal 
 * for a Fraction object on left and a int on the right.
 *
 * @return Fraction object
 */
bool Fraction::operator<=(int i){
    int n, d, nI;
    bool answer = true;
    d = denominator;
    n = numerator;
    nI = i * denominator;
    if(nI < n){
        answer = false;
    }
    return answer; 
}

/**
 * binary - operator for greater than or equal 
 * for a Fraction object on left and a fraction object on the right.
 *
 * @return Fraction object
 */
bool Fraction::operator>=(Fraction& f){
    int n, d, n2;
    bool answer = true;
    d = denominator * f.denominator;
    n = numerator * denominator;
    n2 = f.numerator * denominator;
    if(n2 > n){
        answer = false;
    }
    return answer;
}

/**
 * binary - operator for greater than or equal 
 * for a Fraction object on left and a int on the right.
 *
 * @return Fraction object
 */
bool Fraction::operator>=(int i){
    int n, d, nI;
    bool answer = true;
    d = denominator;
    n = numerator;
    nI = i * denominator;
    if(nI > n){
        answer = false;
    }
    return answer; 
}

/**
 * binary - operator for equal 
 * for a Fraction object on left and a fraction object on the right.
 *
 * @return Fraction object
 */
bool Fraction::operator==(Fraction& f){
    int n, d, n2;
    bool answer = true;
    d = denominator * f.denominator;
    n = numerator * denominator;
    n2 = f.numerator * denominator;
    if(n2 != n){
        answer = false;
    }
    return answer;
}

/**
 * binary - operator for equal 
 * for a Fraction object on left and a int on the right.
 *
 * @return Fraction object
 */
bool Fraction::operator==(int i){
    int n, d, nI;
    bool answer = true;
    d = denominator;
    n = numerator;
    nI = i * denominator;
    if(nI != n){
        answer = false;
    }
    return answer; 
}

/**
 * binary - operator for not equal 
 * for a Fraction object on left and a fraction object on the right.
 *
 * @return Fraction object
 */
bool Fraction::operator!=(Fraction& f){
    int n, d, n2;
    bool answer = true;
    d = denominator * f.denominator;
    n = numerator * denominator;
    n2 = f.numerator * denominator;
    if(n2 == n){
        answer = false;
    }
    return answer;
}

/**
 * binary - operator for not equal 
 * for a Fraction object on left and a int on the right.
 *
 * @return Fraction object
 */
bool Fraction::operator!=(int i){
    int n, d, nI;
    bool answer = true;
    d = denominator;
    n = numerator;
    nI = i * denominator;
    if(nI == n){
        answer = false;
    }
    return answer; 
}

/**
 * function for adding int on the right to a Fraction object
 *          
 *
 * @return Fraction object
 */
Fraction Fraction::operator+(int i) const{
    int n, d;
    n = numerator + (denominator * i);
    d = denominator;
    return Fraction(n, d);
}

/**
 * binary - operator for subtraction between
 * a fraction on the left and fraction on the right
 *
 * @return Fraction object
 */
Fraction Fraction::operator+(Fraction& f) const{
    int n, d;
    d = denominator * f.denominator;
    n = (numerator * denominator) + (f.numerator * denominator);
    return Fraction(n, d);
}


