#include <iostream>
using namespace std;

int main()
{
    float x, y;
    float add, sub, mul, div;
    char choice;

    cout << "Enter Two Numbers: " << endl;
    cin >> x;
    cin >> y;

    cout << "----Menu----" << endl;
    cout << "A) Addition" << endl;
    cout << "B) Subtraction" << endl;
    cout << "C) Multiplication" << endl;
    cout << "D) Division" << endl;
    cout << "----------------------" << endl;

    cout << "Enter Your Choice: " << endl;
    cin >> choice;

    switch (choice)
    {
    case 'A':
        add = x + y;
        cout << x << "+" << y << "=" << add << endl;
        break;

    case 'B':
        sub = x - y;
        cout << x << "-" << y << "=" << sub << endl;
        break;

    case 'C':
        mul = x * y;
        cout << x << "*" << y << "=" << mul << endl;
        break;

    case 'D':
        div = x / y;
        cout << x << "/" << y << "=" << div << endl;
        break;

    case 'E':
        break;

    default:
        cout << "Invalid InPut...." << endl;
    }

    return 0;
}