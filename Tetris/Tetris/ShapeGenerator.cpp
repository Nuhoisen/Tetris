#include "ShapeGenerator.h"



ShapeGenerator::ShapeGenerator():mSelection(4)
{
	mSelection[0] = new Square();
	mSelection[1] = new Zeltoid();
	mSelection[2] = new LShape();
	mSelection[3] = new TShape();
}


ShapeGenerator::~ShapeGenerator()
{
}
