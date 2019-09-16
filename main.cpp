#include <iostream>
#include <cmath>

using namespace std;

class Complex
{
private:
    int a, b, c, d;
public:
    Complex ()
    {
        a = 1;
        b = 1;
        c = 1;
        d = 1;
        cout << "Construct is done!";
    }
    ~Complex()
    {
        cout << "Destructor is done!";
    }
    void Init ()
    {
        cout << "Enter a, b, c, d: ";
        Read();
    }
    void Read ()
    {
        cin >> a >> b >> c >> d;
    }
    void Display ()
    {
        cout << a << ", " << b <<endl << c << ", " << d;
    }

    void add (int a, int b, int c, int d)
    {
        cout << "sum = " << a+c << ", " << b+d <<endl;
    }
    void sub (int a, int b, int c, int d)
    {
        cout << "sub = " << a-c << ", " << "b-d" <<endl;
    }
    void mul (int a, int b, int c, int d)
    {
        cout << "mul = " << (a*c)-(b*d) << ", " << (a*d)+(b*c) << endl;
    }
    void div (int a, int b, int c, int d)
    {
        cout << "div = " << (a*c)+(b*d) << ", " << (b*c)-(a*d) << "/" << pow (c, 2) + pow (d, 2);
    }
    void equ (int a, int b, int c, int d)
    {
        if (a == c && b == d)
        {
           cout << "equ";
        } else
            {
                cout << "Not eru";
        }
    }
    void conj (int a, int b)
    {
        cout << "conj = " << a << ", " << -b <<endl;
    }
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}