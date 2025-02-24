#ifndef _SCREEN_H_
#define _SCREEN_H_

#include <3ds.h>
#include <citro2d.h>
#include <stdlib.h>
#include "colors.h"

extern u8 PAGE_CURRENT;

enum PAGE_STATE
{
  PAGE_MAIN,
  PAGE_ABOUT,
  PAGE_PAINT,
  PAGE_3D,
  PAGE_GYRO,
  PAGE_AUDIO
};

extern C3D_RenderTarget *top;
extern C3D_RenderTarget *bottom;
extern C2D_TextBuf g_staticBuf;
extern C2D_Font font;

void Screen_init ();
void Screen_setupPage (bool *, void (*) ());
void Screen_changePage (const enum PAGE_STATE, void (*) ());
void Screen_setBackground (C3D_RenderTarget *, const int);
void Screen_drawCircle (const float, const float, const float, const u32);
void Screen_drawJoystick (const circlePosition *, const float, const float,
                          const float);
const char *Screen_initText (C2D_Text *, C2D_TextBuf, const char *);
void Screen_drawText (const C2D_Text *, const float, const float, const float,
                      const float, const u32);

#endif
