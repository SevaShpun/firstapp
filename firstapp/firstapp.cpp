// firstapp.cpp: определ€ет точку входа дл€ консольного приложени€.
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
    cout << "¬ведите первое число: ";
    cin >> a;
    cout << "¬ведите второе число: ";
    cin >> b;
    cout << endl << sum(a, b) << endl;
    system("pause");
    return 0;
}

