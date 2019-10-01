//Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <cmath>

using namespace std;

class Complex
{
private:
    int a, b;
public:
    Complex ();
    ~Complex ();
    friend istream & operator >> (istream & is, Complex & p);
    friend ostream & operator << (ostream & os, Complex & p);
    static void Init ();
    static void add(Complex firstObject, Complex secondObject);
    static void sub (Complex firstObject, Complex secondObject);
    static void mul (Complex firstObject, Complex secondObject);
    static void div (Complex firstObject, Complex secondObject);
    static void equ (Complex firstObject, Complex secondObject);
    static void conj (Complex object);
};
#endif