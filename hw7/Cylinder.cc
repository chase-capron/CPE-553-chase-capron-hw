/*
Mourad Deihim, Chase Capron
Assisted by Peter Ho

"I pledge my honor that I have abided by the Stevens Honors System"
*/

#include "Cylinder.hh"
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

void Cylinder::print(string filename) const{
    ofstream file;
    file.open(filename);
    double theta = 2*M_PI/f;    //angle increment
    // z = rsin(theta), x = rcos(theta)

    file << "solid cylinder"<<endl;    // stl starts with solid name

    for(int i = 0; i<f; i++){
    //  bottom circle, normal points downwards = clockwise from top,
        // or ccw from bottom
    file<<"    "<< "facet normal 0 0 0"<<endl;
    file<< "       "<< "outer loop"<<endl;
    file<< "           "<< "vertex " << x << " " << y<< " " << z <<endl;    //center point
    file<< "           "<< "vertex " << x+(r*cos(i*theta)) << " " << y<< " " << z+(r*sin(i*theta)) <<endl;  //horizontal line
    file<< "           "<< "vertex " << x+(r*cos((i+1)*theta))<< " " << y<< " " << z+(r*sin((i+1)*theta)) <<endl;
    file<< "       "<< "endloop"<<endl;
    file<<"    "<< "endfacet"<<endl;
    //  top circle, normal points upwards = counterclockwise from top
    file<<"    "<< "facet normal 0 0 0"<<endl;
    file<< "       "<< "outer loop"<<endl;
    file<< "           "<< "vertex " << x+(r*cos((i+1)*theta))<< " " << y+h<< " " << z+(r*sin((i+1)*theta)) <<endl;
    file<< "           "<< "vertex " << x+(r*cos(i*theta)) << " " << y+h<< " " << z+(r*sin(i*theta)) <<endl;  //horizontal line
    file<< "           "<< "vertex " << x << " " << y+h<< " " << z <<endl;    //center point
    file<< "       "<< "endloop"<<endl;
    file<<"    "<< "endfacet"<<endl;

    // middle section triangle pointing up, ccw when you look straight at it
    file<<"    "<< "facet normal 0 0 0"<<endl;
    file<< "       "<< "outer loop"<<endl;
    file<< "           "<< "vertex " << x+(r*cos(i*theta)) << " " << y+h<< " " << z+(r*sin(i*theta)) <<endl;  //top vertex
    file<< "           "<< "vertex " << x+(r*cos((i+1)*theta))<< " " << y<< " " << z+(r*sin((i+1)*theta)) <<endl;
    file<< "           "<< "vertex " << x+(r*cos(i*theta)) << " " << y<< " " << z+(r*sin(i*theta)) <<endl;  //horizontal line
    file<< "       "<< "endloop"<<endl;
    file<<"    "<< "endfacet"<<endl;
    //  middle section triangle pointing down, ccw when you look straight at it
    file<<"    "<< "facet normal 0 0 0"<<endl;
    file<< "       "<< "outer loop"<<endl;
    file<< "           "<< "vertex " << x+(r*cos(i*theta)) << " " << y+h<< " " << z+(r*sin(i*theta)) <<endl;  //horizontal line
    file<< "           "<< "vertex " << x+(r*cos((i+1)*theta))<< " " << y+h<< " " << z+(r*sin((i+1)*theta)) <<endl;
    file<< "           "<< "vertex " << x+(r*cos((i+1)*theta)) << " " << y<< " " << z+(r*sin((i+1)*theta)) <<endl;  //top vertex
    file<< "       "<< "endloop"<<endl;
    file<<"    "<< "endfacet"<<endl;

    }
    file << "endsolid cylinder"<<endl;    // stl starts with solid name
}
