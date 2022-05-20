// firstapp.cpp: определяет точку входа для консольного приложения.


// #include "stdafx.h"
#include <iostream>
// #include <string>

using namespace std;


string sum(int a, int b) {
    cout << a << " + " << b << " = " << a + b << endl;
    // return to_string(a) + " + " + to_string(b) + " = " + to_string(a + b);
}

int main()
{
    // setlocale(LC_ALL, "Russian");

    int a, b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    sum(a, b);
    system("pause");
    return 0;
}
// clear; rm Debug/firstapp.exe; "g++.exe" -o Debug/firstapp firstapp.cpp; Debug/firstapp.exe
