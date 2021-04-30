// Authors: Chase Capron, Mourad Deihim
// Date: 4/29/2021
// I pledge my honor that I have abided by the Stevens Honor System.

#include <iostream>
#include "Cube.hh"
#include "Cylinder.hh"

using namespace std;


int main() {
    //translate([0,10,0]) cube(25);
    Cube c(0,10,0, 25); // make a 25x25x25 cube at location (0,10,0)
    c.print("cube.stl");

    //translate([100,0,0]) cylinder(r=20,h=50, $fn=30);

    // center of base circle x=100, y=0, z=0 r=20 h=50, number of facets = 30
    Cylinder cyl(100.0, 0.0, 0.0, 20.0, 50.0, 30.0);
    cyl.print("cyl.stl");

}
