#include <iostream>
#include <GL/glx.h>
#include <math.h>
#include "fonts.h"
using namespace std;
void zach(int x, int y) {
	cout << "hello NOTTRON" << endl;
	Rect nameRect;
	nameRect.left = g.xres/2;
	nameRect.bot = g.yres-100;
	nameRect.center = 1;
	ggprint16(&nameRect, 16, 0x00ffffff, "ZAK");
}
