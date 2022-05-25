// firstapp.cpp: определяет точку входа для консольного приложения.


#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Car {
protected:
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

class Motorcycle: public Car {

};


int main() {
    Motorcycle bmw;
    bmw.setValues("BMW", "M 1000 RR", "Black", 170, 306, 50900);
    bmw.print();

    Car honda("Honda", "CR-V", "Red", 1500, 250.5, 25000);
    honda.print();

    Car toyota("Toyota", "CAMRY", "Red", 1800, 280, 30000);
    toyota.print();

    Car mitsubishi("Mitsubishi", "ASX", "Blue", 2000, 195, 47000);
    mitsubishi.print();
    return 0;
}
// clear; g++ -o Debug/firstapp firstapp.cpp; ./Debug/firstapp.exe
