#include <SDL.h>

int processEvents(void) {
	SDL_Event event;
	int done = 1;
	while(SDL_PollEvent(&event)) {
		if(event.type == SDL_WINDOWEVENT) {
			if(event.window.event == SDL_WINDOWEVENT_CLOSE) {
				done = 0;
			}
		}
	}

	const Uint8* state = SDL_GetKeyboardState(NULL);


	return done;
}
