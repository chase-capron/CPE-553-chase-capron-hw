#pragma once
#include <iostream>
using namespace std;

class Cube{
protected:
    double x, y, z, s;
public:
    Cube(double _x, double _y, double _z, double _s): x(_x), y(_y), z(_z), s(_s){}
    void print(string filename) const;
};