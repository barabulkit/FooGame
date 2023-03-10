#ifndef __RENDERER_H
#define __RENDERER_H

#define WINDOW_HEIGHT 1200
#define WINDOW_WIDTH 720

SDL_Renderer* getRenderer();
SDL_Window* getWindow();
void closeRenderer();

#endif
