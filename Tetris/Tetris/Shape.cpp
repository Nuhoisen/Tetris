#include "Shape.h"



Shape::Shape(int x, int y, string name) : mLayout(x, vector<int>(y, 1)), mName(name){}

Shape::Shape():mLayout(){}


Shape::~Shape(){}
