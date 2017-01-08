#include "LShape.h"



LShape::LShape():Shape(3,2, "LShape")
{
	mLayout[0][1] = 0;
	mLayout[1][1] = 0;
}


LShape::~LShape()
{
}
