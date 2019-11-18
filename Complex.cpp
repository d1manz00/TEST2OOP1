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

Complex::~Complex () {}

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

Complex operator+ (const Complex &firstObject, const Complex &secondObject)
{
    Complex result;
    result.a = firstObject.a + secondObject.a;
    result.b = firstObject.b + secondObject.b;
    return result;
}

Complex operator- (const Complex &firstObject, const Complex &secondObject)
{
    Complex result;
    result.a = firstObject.a - secondObject.a;
    result.b = firstObject.b - secondObject.b;
    return result;
}

Complex operator* (const Complex &firstObject, const Complex &secondObject)
{
    Complex result;
    result.a=(firstObject.a * secondObject.a)-(firstObject.b*secondObject.b);
    result.b=(firstObject.a*secondObject.b)+(firstObject.b*secondObject.a);
    return result;
}

Complex operator/ (const Complex &firstObject, const Complex &secondObject)
{
    Complex result;
    double div = pow (secondObject.a, 2) + pow (secondObject.b, 2);
    result.a = (firstObject.a*secondObject.a)+(firstObject.b*secondObject.b)/div;
    result.b = (firstObject.b*secondObject.a)-(firstObject.a*secondObject.b)/div;

    return result;
}

void Complex::div(Complex firstObject, Complex secondObject)
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

void Complex::func (Complex object)
{
    cout << "conj = (" << object.a << ", " << -object.b << ")" <<endl;
}
#endif