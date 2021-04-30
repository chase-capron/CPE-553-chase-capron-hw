// Authors: Chase Capron, Mourad Deihim
// Date: 4/29/2021
// I pledge my honor that I have abided by the Stevens Honor System.

#include "Cube.hh"
#include <iostream>
#include <fstream>
using namespace std;

void Cube::print(string filename) const{
    ofstream f;
    f.open(filename);

    f << "solid cube"<<endl;    // stl starts with solid name

    f<<"    "<< "facet normal -0 0 1"<<endl;
    f<< "       "<< "outer loop"<<endl;
    f<< "           "<< "vertex " << x << " " << y+s<< " " << z+s <<endl;
    f<< "           "<< "vertex " << x+s << " " << y<< " " << z+s <<endl;
    f<< "           "<< "vertex " << x+s << " " << y+s<< " " << z+s <<endl;
    f<< "       "<< "endloop"<<endl;
    f<<"    "<< "endfacet"<<endl;


    f<<"    "<< "facet normal 0 0 1"<<endl;
    f<< "       "<< "outer loop"<<endl;
    f<< "           "<< "vertex " << x+s << " " << y<< " " << z+s <<endl;
    f<< "           "<< "vertex " << x << " " << y+s<< " " << z+s <<endl;
    f<< "           "<< "vertex " << x << " " << y<< " " << z+s <<endl;
    f<< "       "<< "endloop"<<endl;
    f<<"    "<< "endfacet"<<endl;


    f<<"    "<< "facet normal 0 0 -1"<<endl;
    f<< "       "<< "outer loop"<<endl;
    f<< "           "<< "vertex " << x << " " << y<< " " << z <<endl;
    f<< "           "<< "vertex " << x+s << " " << y+s<< " " << z <<endl;
    f<< "           "<< "vertex " << x+s << " " << y<< " " << z <<endl;
    f<< "       "<< "endloop"<<endl;
    f<<"    "<< "endfacet"<<endl;


    f<<"    "<< "facet normal -0 0 -1"<<endl;
    f<< "       "<< "outer loop"<<endl;
    f<< "           "<< "vertex " << x+s << " " << y+s<< " " << z <<endl;
    f<< "           "<< "vertex " << x << " " << y<< " " << z <<endl;
    f<< "           "<< "vertex " << x << " " << y+s<< " " << z <<endl;
    f<< "       "<< "endloop"<<endl;
    f<<"    "<< "endfacet"<<endl;


    f<<"    "<< "facet normal 0 -1 0"<<endl;
    f<< "       "<< "outer loop"<<endl;
    f<< "           "<< "vertex " << x << " " << y<< " " << z <<endl;
    f<< "           "<< "vertex " << x+s << " " << y<< " " << z+s <<endl;
    f<< "           "<< "vertex " << x << " " << y<< " " << z+s <<endl;
    f<< "       "<< "endloop"<<endl;
    f<<"    "<< "endfacet"<<endl;


    f<<"    "<< "facet normal 0 -1 -0"<<endl;
    f<< "       "<< "outer loop"<<endl;
    f<< "           "<< "vertex " << x+s << " " << y << " " << z+s <<endl;
    f<< "           "<< "vertex " << x << " " << y<< " " << z <<endl;
    f<< "           "<< "vertex " << x+s << " " << y<< " " << z <<endl;
    f<< "       "<< "endloop"<<endl;
    f<<"    "<< "endfacet"<<endl;


    f<<"    "<< "facet normal 1 -0 0"<<endl;
    f<< "       "<< "outer loop"<<endl;
    f<< "           "<< "vertex " << x+s << " " << y<< " " << z+s <<endl;
    f<< "           "<< "vertex " << x+s << " " << y+s<< " " << z <<endl;
    f<< "           "<< "vertex " << x+s << " " << y+s<< " " << z+s <<endl;
    f<< "       "<< "endloop"<<endl;
    f<<"    "<< "endfacet"<<endl;


    f<<"    "<< "facet normal 1 0 0"<<endl;
    f<< "       "<< "outer loop"<<endl;
    f<< "           "<< "vertex " << x+s << " " << y+s<< " " << z <<endl;
    f<< "           "<< "vertex " << x+s << " " << y<< " " << z+s <<endl;
    f<< "           "<< "vertex " << x+s << " " << y<< " " << z <<endl;
    f<< "       "<< "endloop"<<endl;
    f<<"    "<< "endfacet"<<endl;


    f<<"    "<< "facet normal 0 1 -0"<<endl;
    f<< "       "<< "outer loop"<<endl;
    f<< "           "<< "vertex " << x+s << " " << y+s<< " " << z <<endl;
    f<< "           "<< "vertex " << x << " " << y+s<< " " << z+s <<endl;
    f<< "           "<< "vertex " << x+s << " " << y+s<< " " << z+s <<endl;
    f<< "       "<< "endloop"<<endl;
    f<<"    "<< "endfacet"<<endl;


    f<<"    "<< "facet normal 0 1 0"<<endl;
    f<< "       "<< "outer loop"<<endl;
    f<< "           "<< "vertex " << x << " " << y+s<< " " << z+s <<endl;
    f<< "           "<< "vertex " << x+s << " " << y+s<< " " << z <<endl;
    f<< "           "<< "vertex " << x << " " << y+s<< " " << z <<endl;
    f<< "       "<< "endloop"<<endl;
    f<<"    "<< "endfacet"<<endl;


    f<<"    "<< "facet normal -1 0 0"<<endl;
    f<< "       "<< "outer loop"<<endl;
    f<< "           "<< "vertex " << x << " " << y<< " " << z <<endl;
    f<< "           "<< "vertex " << x << " " << y+s<< " " << z+s <<endl;
    f<< "           "<< "vertex " << x << " " << y+s<< " " << z <<endl;
    f<< "       "<< "endloop"<<endl;
    f<<"    "<< "endfacet"<<endl;


    f<<"    "<< "facet normal -1 -0 0"<<endl;
    f<< "       "<< "outer loop"<<endl;
    f<< "           "<< "vertex " << x << " " << y+s<< " " << z+s <<endl;
    f<< "           "<< "vertex " << x << " " << y<< " " << z <<endl;
    f<< "           "<< "vertex " << x << " " << y<< " " << z+s <<endl;
    f<< "       "<< "endloop"<<endl;
    f<<"    "<< "endfacet"<<endl;

    f<< "endsolid cube"<<endl;    // stl starts with solid name

}
