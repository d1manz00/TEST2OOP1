//Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <cmath>

using namespace std;

class Complex
{
private:
    double a, b;
public:
    Complex ();
    ~Complex ();
    friend istream & operator >> (istream & is, Complex & p);
    friend ostream & operator << (ostream & os, Complex & p);
    friend Complex operator* (const Complex &firstObject, const Complex &secondObject);
    friend Complex operator- (const Complex &firstObject, const Complex &secondObject);
    friend Complex operator+ (const Complex &firstObject, const Complex &secondObject);
    friend Complex operator/ (const Complex &firstObject, const Complex &secondObject);
    static void Init ();
    static void add(Complex firstObject, Complex secondObject);
    static void div (Complex firstObject, Complex secondObject);
    static void equ (Complex firstObject, Complex secondObject);
    static void func (Complex object);
};
#endif