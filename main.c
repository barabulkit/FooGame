#include <SDL.h>
#include <stdio.h>
#include <process_events.h>

int main() {
	if(SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		printf("SDL_Init Error: %s", SDL_GetError());
		return 1;
	}

	SDL_Window *win = SDL_CreateWindow("Hello, World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
	
	if(win == NULL) {
		printf("SDL_CreateWindow Error: %s", SDL_GetError());
		return 1;
	}
	
	SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if(ren == NULL) {
		printf("SDL_CreateRenderer Error: %s", SDL_GetError());
		return 1;
	}

	SDL_Surface *bmp = SDL_LoadBMP("../image.bmp");
	if(bmp == NULL) {
		printf("SDL_LoadBMP Error: %s", SDL_GetError());
		return 1;
	}

	SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, bmp);
	SDL_FreeSurface(bmp);
	if(tex == NULL) {
		printf("SDL_CreateTextureFromSurface Error: %s", SDL_GetError());
		return 1;
	}

	while(processEvents()) {
		SDL_RenderClear(ren);
		SDL_RenderCopy(ren, tex, NULL, NULL);
		SDL_RenderPresent(ren);

	}
	SDL_Delay(2000);

	SDL_DestroyTexture(tex);
	SDL_DestroyRenderer(ren);
	SDL_DestroyWindow(win);
	SDL_Quit();
}
