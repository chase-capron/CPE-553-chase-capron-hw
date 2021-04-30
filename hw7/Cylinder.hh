#pragma once
#include <iostream>
using namespace std;

class Cylinder{
protected:
    double x, y, z, r, h, f;
public:
    Cylinder(double _x, double _y, double _z, double _r, double _h, double _f): x(_x), y(_y), z(_z), r(_r), h(_h), f(_f){}
    void print(string filename) const;
};