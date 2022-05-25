// firstapp.cpp: определяет точку входа для консольного приложения.


#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string name = "";
    string model = "";
    string color = "";
    int price = 0;
    int height = 0;
    float speed = 0;
public:
    Car() {}

    Car(string name, string model, string color, int height, float speed, int price) {
        this->name = name;
        this->model = model;
        this->color = color;
        this->height = height;
        this->speed = speed;
        this->price = price;
    }

    void setValues(string name, string model, string color, int height, float speed, int price) {
        this->name = name;
        this->model = model;
        this->color = color;
        this->height = height;
        this->speed = speed;
        this->price = price;
    }

    void print() {
        cout
        << this->name << " (" << this->model << ") - "
        << this->color << " (h:" << this->height << ", s:" << this->speed << ") $" << this->price << endl;
    }

    ~Car () {
        cout << "Done" << endl;
    }
};

string sum(int a, int b) {
    // cout << a << " + " << b << " = " << a + b << endl;
    return to_string(a) + " + " + to_string(b) + " = " + to_string(a + b);
}

int main()
{
    Car honda("Honda", "CR-V", "Red", 1500, 250.5, 25000);
    honda.print();

    Car toyota("Toyota", "CAMRY", "Red", 1800, 280, 30000);
    toyota.print();

    Car mitsubishi("Mitsubishi", "ASX", "Blue", 2000, 195, 47000);
    mitsubishi.print();
    return 0;
}
// clear; g++ -o Debug/firstapp firstapp.cpp; ./Debug/firstapp.exe
