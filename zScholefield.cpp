#include <iostream>
#include <GL/glx.h>
#include <math.h>
#include "fonts.h"
using namespace std;
void zach(int x, int y) {
<<<<<<< HEAD
	cout << "hello NOTTRON" << endl;
	Rect nameRect;
	nameRect.left = g.xres/2;
	nameRect.bot = g.yres-100;
	nameRect.center = 1;
	ggprint16(&nameRect, 16, 0x00ffffff, "ZAK");
=======
	//cout << "hello NOTTRON" << endl;
	Rect r;
	r.left = x + 90;
	r.bot = y + 60;
	ggprint16(&r, 16, 0x00ffffff, "Zachary Scholefield");
>>>>>>> 3a34bfc628fecd5910328c4e5b9eebf5c9471742
}
