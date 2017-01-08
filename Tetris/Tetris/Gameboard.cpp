#pragma once
#include "Gameboard.h"

Gameboard::Gameboard() : mGameSpace(16, vector<int>(20, 0)) {}

void Gameboard::render() {
	DWORD y = 1;
	LPDWORD x = &y;

	for (short j = 0; j <= mGameSpace[0].size(); j += 1) {
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { j, 0 });
		std::cout << (char)254;
		mGameSpace[0][j] = 2;
	}

	TCHAR outChar = L'\u0444';
	for (short i = 0; i < mGameSpace.size(); i++) {
		
		for (short j = 0; j <= mGameSpace[i].size(); j +=mGameSpace[i].size()){
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { j, i });
			std::cout << (char)254;
			mGameSpace[i][j] = 2;
		}
	}

	for (short j = 0; j <= mGameSpace[0].size(); j += 1) {
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { j, (short)mGameSpace.size()});
		std::cout << (char)254;
		mGameSpace[mGameSpace.size()][j] = 2;
	}
}




