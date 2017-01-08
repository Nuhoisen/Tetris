#include "TShape.h"



TShape::TShape() : Shape(2, 3, "TShape")
{
	mLayout[0][0] = 0;
	mLayout[0][2] = 0;
}


TShape::~TShape()
{
}
