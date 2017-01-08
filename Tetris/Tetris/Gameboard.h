#pragma once
#include <Windows.h>
#include <fcntl.h>
#include <io.h>
#include <iostream>
#include <vector>
using std::vector;



class Gameboard {
public:
	Gameboard();
	void render();

private:
	vector<vector<int>> mGameSpace;

};