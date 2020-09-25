/*
    Author: Carter Womack
    Project additions: Undecided
*/
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <math.h>
#include <X11/Xlib.h>
#include <X11/keysym.h>
#include <GL/glx.h>
#include "log.h"
#include "fonts.h"

void carter(int x, int y) {

	Rect r;
	r.left = x + 90;
	r.bot = y + 80;
	r.center = 0;
	ggprint16(&r, 16, 0x00ffffff, "Carter Womack");

}
