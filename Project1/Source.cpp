#include<SDL.h>
#include<iostream>
#undef main
int main()
{
	std::cout << "printing nothing";
	int width = 600, height = 480;
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *win = SDL_CreateWindow("nothing", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
	SDL_Renderer *ren=SDL_CreateRenderer(win,-1, 0);
	SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
	SDL_RenderClear(ren);
	while (1) {
		SDL_RenderPresent(ren);
	}
	std::cin.get();
	return 0;
}