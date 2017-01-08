#include "Zeltoid.h"



Zeltoid::Zeltoid():Shape(2, 2, "Zeltoid")
{
	mLayout[0][1] = 0;
	mLayout[1][0] = 0;
}


Zeltoid::~Zeltoid(){}
