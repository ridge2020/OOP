#include"Fraction.h"
#include<stdexcept>
#include"gcd.h"
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

void Fraction::write(std::ostream&) const{
    cout << numerator << "/" << denominator << endl;
}

Fraction Fraction::add(int i) const{
    int n, d;
    n = numerator + (denominator * i);
    d = denominator;
    
    return Fraction(n, d);
}

Fraction Fraction::operator+(int i) const{
    int n, d;
    n = numerator + (denominator * i);
    d = denominator;
    return Fraction(n, d);
}

Fraction Fraction::operator+ (const Fraction& op2) const{
    int d, n;
    d = denominator * op2.denominator;
    n = (op2.numerator * denominator) + (numerator* op2.denominator);
    return  Fraction(n, d);
}

Fraction operator+ (int i, const Fraction& f){
    int n, d;
    n = f.numerator + (f.denominator * i);
    d = f.denominator;
    return Fraction(n, d);
}

void Fraction::reduce(){
    int greatestCF = gcd(numerator, denominator);
    numerator = numerator/greatestCF;
    denominator = denominator/greatestCF;
}

void operator<<(std::ostream& outfile, const Fraction& f){
    cout << f.numerator << '/' << f.denominator;
}