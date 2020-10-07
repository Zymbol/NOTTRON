/*
    Author: Carter Womack
    Project additions: Undecided
*/

// 10-7-2020 Removed extra include statements

#include "fonts.h"

void carter(int x, int y) {
	Rect r;
	r.left = x + 90;
	r.bot = y + 80;
	r.center = 0;
	ggprint16(&r, 16, 0x00ffffff, "Carter Womack");
}
