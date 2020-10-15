/*
    Author: Carter Womack
    Project additions: Undecided
*/

// 10-7-2020 Removed extra include statements
// 10-15-2020 Tried adding an explosion when the cycle hits a trail/wall  

#include "fonts.h"

void carter(int x, int y) {
	Rect r;
	r.left = x + 90;
	r.bot = y + 80;
	r.center = 0;
	ggprint16(&r, 16, 0x00ffffff, "Carter Womack");
}

/*
void explodeAndEnd() {
    if (g.gameover) {
    render explosion sprites in order
    spent all class trying to learn how to render and animate sprites using multiple images.
    yea, I made no progress :)   
    }
}
*/
