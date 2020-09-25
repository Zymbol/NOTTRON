#include <iostream>
#include <GL/glx.h>
#include <math.h>
#include "fonts.h"

using namespace std;

void zach(int x, int y)
{
	Rect r;
	r.left = x + 90;
	r.bot = y + 60;
	ggprint16(&r, 16, 0x00ffffff, "Zachary Scholefield");
}
