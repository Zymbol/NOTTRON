//Zachary Scholefield
// Fall 2020
// Removed all unused include statements.


//Did research the entire time 10/15/2020


#include "fonts.h"

using namespace std;

void zach(int x, int y)
{
	Rect r;
	r.left = x + 90;
	r.bot = y + 60;
	ggprint16(&r, 16, 0x00ffffff, "Zachary Scholefield");
}
