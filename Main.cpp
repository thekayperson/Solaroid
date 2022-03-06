#include <iostream>
#include <SDL.h>
//Variables
char quit;


int main(int argc, char** args) {
	SDL_Init(SDL_INIT_EVERYTHING);
	

	//window
	SDL_Window* window = SDL_CreateWindow("Solaroid", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//Window Error
	if (!window) { std::cout << "Window Did Not Window : /   ERROR: " << SDL_GetError() << std::endl; }
	
	

	//Window Surface
	SDL_Surface* windowSurface = SDL_GetWindowSurface(window);
	
	
	//Pink Rectangle
	SDL_FillRect(windowSurface, NULL, SDL_MapRGB(windowSurface->format, 255, 100, 200));

	SDL_UpdateWindowSurface(window);
	
	SDL_Surface* image = SDL_LoadBMP("colin.bmp");




	SDL_Rect dest;
	dest.x = 100;
	dest.y = 50;

	int result = SDL_BlitSurface(image, NULL, windowSurface, &dest);

	if (result < 0) {
		// blit failed
	}
	
	//Quit
	std::cout << "Input X into the console to quit ";
	std::cin >> quit;
	if (std::tolower(quit) == 'x') {
		SDL_DestroyWindow(window);
		window = NULL;
		windowSurface = NULL;
		SDL_FreeSurface(image);
		SDL_Quit();
	}
	
	return 0;
}


