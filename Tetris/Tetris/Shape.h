#pragma once
#include <vector>
#include <string>
using std::vector;
using std::string;

class Shape
{
public:
	Shape();
	Shape(int x, int y, string name);
	~Shape();

	vector<vector<int>> mLayout;
	string mName;
};

