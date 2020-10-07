//Program : edgarB.cpp
//Author: Edgar Bacallo
//
#include "fonts.h"
// removed #include <X11/Xlib.h> / <X11/keysym.h> / <GL/glx.h> / <math.h>
//                                   - Edgar
void edgar(int x, int y){

	//TODO said we needed to generate name on GL using render
	//credits
	/*printf("Show credits here: Edgar Bacallo);
	*/
	Rect r;
		r.left = x + 90;
		r.bot =  y + 100;
		r.center = 0;
		ggprint16(&r, 16, 0x00ffffff, "Edgar Bacallo");


}
