// firstapp.cpp: ���������� ����� ����� ��� ����������� ����������.
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
    cout << "������� ������ �����: ";
    cin >> a;
    cout << "������� ������ �����: ";
    cin >> b;
    cout << endl << sum(a, b) << endl;
    system("pause");
    return 0;
}

