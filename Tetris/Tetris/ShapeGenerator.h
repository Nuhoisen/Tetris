#pragma once
#include "Shape.h"
#include "Square.h"
#include "Zeltoid.h"
#include "LShape.h"
#include "TShape.h"
#include <vector>
using std::vector;

class ShapeGenerator
{
public:
	
	ShapeGenerator();
	~ShapeGenerator();
	Shape generateShape();

	vector<Shape *> mSelection;


};

