#ifndef FRACTION_H
#define FRACTION_H
#include<iostream>

class Fraction {
public:
    Fraction(int n, int d);
    void write(std::ostream& strm=std::cout) const;
    Fraction add(int i) const;
    int get_numerator() {return numerator;}
    int get_denominator() {return denominator;}
    Fraction operator+(Fraction& f) const;
    Fraction operator+(int i) const;
    Fraction operator-();
    Fraction operator-(Fraction& f) const;
    Fraction operator-(int i) const;
    Fraction operator*(Fraction& f) const;
    Fraction operator*(int i) const;
    Fraction operator/(Fraction& f) const;
    Fraction operator/(int i) const;
    bool operator<(Fraction& f);
    bool operator<(int i);
    bool operator>(Fraction& f);
    bool operator>(int i);
    bool operator<=(Fraction& f);
    bool operator<=(int i);
    bool operator>=(Fraction& f);
    bool operator>=(int i);
    bool operator==(Fraction& f);
    bool operator==(int i);
    bool operator!=(Fraction& f);
    bool operator!=(int i);
private:
    int numerator   = 0;
    int denominator = 1;
    void reduce();
};

int gcd(int a, int b); //greatest common denominator

#endif