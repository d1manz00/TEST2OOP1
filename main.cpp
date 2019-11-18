//main.cpp
#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;

int main()
{
    Complex first, second, third;
    while (true)
    {
        string command;
        cout << "Command (+, -, *, /, =,conj, q for quit): ";
        cin >> command;
        if (command == "+")
        {
            first.Init();
            cin >> first;
            cout << first;
            second.Init();
            cin >> second;
            cout << second;
            third = first + second;
            cout << third;}
        else if (command == "-")
        {first.Init();
            cin >> first;
            cout << first;
            second.Init();
            cin >> second;
            cout << second;
            third = first-second;
            cout << third;}
        else if (command == "*")
        {first.Init();
            cin >> first;
            cout << first;
            second.Init();
            cin >> second;
            cout << second;
            third=first*second;
            cout << third;}
        else if (command == "/")
        {first.Init();
            cin >> first;
            cout << first;
            second.Init();
            cin >> second;
            cout << second;
            third = first/second;
            cout << third;
        }
        else if (command == "=")
        {first.Init();
            cin >> first;
            cout << first;
            second.Init();
            cin >> second;
            Complex::equ(first, second);}
        else if (command == "conj")
        {
            first.Init();
            cin >> first;
            cout << first;
            Complex::func (first);
        }
        else
        {
            cout << "ERROR!" <<endl;
            return -1;
        }
    }
}