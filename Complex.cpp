//Complex.cpp
#ifndef COMPLEX_CPP
#define COMPLEX_CPP
#include "Complex.h"

Complex::Complex()
{
    a = 1;
    b = 1;
    cout << "Construct is done!" << endl;
}

Complex::~Complex ()
{
    cout << "Destructor is done!" << endl;
}

istream & operator >> (istream & is, Complex & p)
{
    is >> p.a >> p.b ;
    return is;
}

ostream & operator << (ostream & os, Complex & p)
{
    os << p.a << ", " << p.b <<endl;
    return os;
}

void Complex::Init ()
{
    cout << "Enter a, b: ";
}

void Complex::add (Complex firstObject, Complex secondObject)
{
    cout << "add = (" <<firstObject.a + secondObject.a << ", " << firstObject.b + secondObject.b << ")" <<endl;
}

void Complex::sub(Complex firstObject, Complex secondObject)
{
    cout << "sub = (" <<firstObject.a - secondObject.a << ", " << firstObject.b - secondObject.b << ")" <<endl;
}

void Complex::mul (Complex firstObject, Complex secondObject)
{
    cout << "mul = (" << (firstObject.a * secondObject.a)-(firstObject.b*secondObject.b) << ", " << (firstObject.a*secondObject.b)+(firstObject.b*secondObject.a) << ")" << endl;
}

void Complex::div (Complex firstObject, Complex secondObject)
{
    cout << "div = (" << (firstObject.a*secondObject.a)+(firstObject.b*secondObject.b) << ", " << (firstObject.b*secondObject.a)-(firstObject.a*secondObject.b) << ")" << "/" << "(" <<pow (secondObject.a, 2) + pow (secondObject.b, 2) << ")" <<endl;
}

void Complex::equ (Complex firstObject, Complex secondObject)
{
    if (firstObject.a == secondObject.a && firstObject.b == secondObject.b)
    {
        cout << "equ" <<endl;
    }
    else
    {
        cout << "Not equ" <<endl;
    }
}

void Complex::conj (Complex object)
{
    cout << "conj = (" << object.a << ", " << -object.b << ")" <<endl;
}
#endif