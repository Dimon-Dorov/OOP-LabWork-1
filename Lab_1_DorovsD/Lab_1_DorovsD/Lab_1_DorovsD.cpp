#include <iostream>
#include <string>
#include "LinearEquation.h"
using namespace std;

int main()
{
    double x, y;
    LinearEquation A;
    cout << "Input A:\n";
    A.Read();
    cout << "A:\n";
    A.Display();
    cout << "Equation to string:\n" << A.toString();

    cout << "\nInput x to calculate y: ";
    cin >> x;
    y = A.function(x);
    cout << "Result y = " << y << endl;

    return 0;
}