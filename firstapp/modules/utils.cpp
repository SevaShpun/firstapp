#include <iostream>
#include <string>

using namespace std;

int rand_int(int low, int high) {
    return low + rand() % high;
}

float rand_float(float low, float high) {
    return low + static_cast<float>(rand()) * static_cast<float>(high - low) / RAND_MAX;
}