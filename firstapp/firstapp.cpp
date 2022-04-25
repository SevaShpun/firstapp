// firstapp.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


string sum(int a, int b) {
    return to_string(a) + " + " + to_string(b) + " = " + to_string(a + b);
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << endl << sum(a, b) << endl;
    system("pause");
    return 0;
}

