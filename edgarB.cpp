//Program : edgarB.cpp
//Author: Edgar Bacallo
//
#include "fonts.h"
#include <GL/glx.h>
// removed #include <X11/Xlib.h> / <X11/keysym.h> / <math.h>
//                                   - Edgar
// 10/15/2020: creating a function for title screen.

struct eddGlobal{
    GLuint titleTexture;
    int nbuttons;
    eddGlobal(){
    nbuttons = 0;
    }
}e;

void edgar(int x, int y){
	Rect r;
	r.left = x + 90;
	r.bot =  y + 100;
	r.center = 0;
	ggprint16(&r, 16, 0x00ffffff, "Edgar Bacallo");
}
// Game title screen/ intro/ menu
bool title_screen(int xres, int yres){
    //attempted to add a title screen.
    // for some reason it is not adding the initial this window 
    // most likely its because i set it as a texture.
    // gotta figure it out 
    glGenTextures(1,&e.titleTexture);
    glBindTexture(GL_TEXTURE_2D, e.titleTexture);
    glBegin(GL_QUADS);
	glTexCoord2f(0.0f, 0.0f); glVertex2i(0,0);
	glTexCoord2f(0.0f, 1.0f); glVertex2i(0, yres);
	glTexCoord2f(1.0f, 1.0f); glVertex2i(xres, yres);
	glTexCoord2f(1.0f, 0.0f); glVertex2i(xres, 0);
    glEnd();
    glBindTexture(GL_TEXTURE_2D, 0);

    glViewport(1, 1, xres, yres);     
    /*
	// this will be the start button that i would need to fix
	e.nbutton[e.nbuttons].r.width = 140;
	e.nbutton[e.nbuttons].r.height = 60;
	e.nbutton[e.nbuttons].r.left = 20;
	e.nbutton[e.nbuttons].r.bot = 160;
	e.nbutton[e.nbuttons].r.right =
	   e.nbutton[e.nbuttons].r.left + e.nbutton[e.nbuttons].r.width;
	e.nbutton[e.nbuttons].r.top = e.nbutton[e.nbuttons].r.bot +
	   e.nbutton[e.nbuttons].r.height;
	e.nbutton[e.nbuttons].r.centerx = (e.nbutton[e.nbuttons].r.left +
	   e.nbutton[e.nbuttons].r.right) / 2;
	e.nbutton[e.nbuttons].r.centery = (e.nbutton[e.nbuttons].r.bot +
	   e.nbutton[e.nbuttons].r.top) / 2;
	//strcpy(e.button[e.nbuttons].text, "Quit");
	e.nbutton[e.nbuttons].down = 0;
	e.nbutton[e.nbuttons].click = 0;
	e.nbutton[e.nbuttons].color[0] = 0.3f;
	e.nbutton[e.nbuttons].color[1] = 0.3f;
	e.nbutton[e.nbuttons].color[2] = 0.6f;
	e.nbutton[e.nbuttons].dcolor[0] = e.nbutton[e.nbuttons].color[0] * 0.5f;
	e.button[e.nbuttons].dcolor[1] = e.nbutton[e.nbuttons].color[1] * 0.5f;
	e.button[e.nbuttons].dcolor[2] = e.nbutton[e.nbuttons].color[2] * 0.5f;
	e.button[e.nbuttons].text_color = 0x00ffffff;
	e.nbuttons++;
	// add case to handle button press;
    */
    return 0;    
}
