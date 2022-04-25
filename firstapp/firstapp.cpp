// firstapp.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main()
{
    cout << sum(54,25) << endl;
    system("pause");
    return 0;
}

