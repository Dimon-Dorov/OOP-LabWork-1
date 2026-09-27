#include "LinearEquation.h"
#include <iostream>
#include <string>
using namespace std;

// Лабораторне заняття 1, варіант 10, Доровских Д.О.
// Лінійне рівняння y = Ax + B. 
// Поле first — дробове число, коефіцієнт А;
// поле second — дробове число, коефіцієнт В.
// Реалізувати метод function() — обчислення для заданого х значення функції y.


bool LinearEquation::init(double f, double s)
{
    if (f == 0) {
        cout << "First (A) cant be 0" << endl;
        return false;
    }
    this->first = f;
    this->second = s;
    return true;
}

void LinearEquation::Read()
{
    double f, s;
    do {
        cout << "Input first (A): ";
        cin >> f;
        cout << endl;
        cout << "Input second (B): ";
        cin >> s;
        cout << endl;
    } while (!this->init(f, s));
}

void LinearEquation::Display()
{
    cout << "Equation: y = " << this->first << " * x ";
    if (this->second >=0) {
        cout << "+ " << this->second << endl;
    }
    else {
        cout << this->second << endl;
    }
}

double LinearEquation::function(double X)
{
    double y;
    y = this->first * X + this->second;
    return y;
}

string LinearEquation::toString()
{
    string result = "y = " + to_string(this->first) + " * x ";
    if (this->second >= 0) {
        result = result + "+ " + to_string(this->second);
    }
    else {
        result = result + to_string(this->second);
    }
    return result;
}
