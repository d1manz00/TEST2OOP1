//main.cpp
#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    cout << "Hello, World!" << endl;
    Complex first, second;
    first.Init();
    cin >> first;
    cout << first;
    second.Init();
    cin >> second;
    cout << second;
    Complex::add(first, second);
    Complex::div(first, second);
    Complex::mul(first, second);
    Complex::equ(first, second);
    Complex::sub(first, second);
    return 0;
}