#include <iostream>
#include <SDL.h>

char quit;

//Includes Main 
int main(int argc, char** args) {
	SDL_Init(SDL_INIT_EVERYTHING);


	//Window Moment
	SDL_Window* window = SDL_CreateWindow("Solaroid", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//Make Sure it like did it lol
	//Using std::cout so i dont have to use namespace std
	if (!window) { std::cout << "Window Did Not Window :(   ERROR: " << SDL_GetError() << std::endl; }
	//Hopefully /\ works bc idk how to test it


	//Get Window surface, like a JFrame canvas idk why im writing this you dont know what that is lol
	SDL_Surface* windowSurface = SDL_GetWindowSurface(window);
	
	
	//Makes A coloured rectangle which fills the entire surface
	SDL_FillRect(windowSurface, NULL, SDL_MapRGB(windowSurface->format, 255, 100, 200));

	SDL_UpdateWindowSurface(window);
	
	
	//my primitive quit system bc if you just close the window it steals your RAM so sneaky
	std::cout << "Input X into the console to quit ";
	std::cin >> quit;
	if (std::tolower(quit) == 'x') {
		SDL_DestroyWindow(window);
		window = NULL;
		windowSurface = NULL;

		SDL_Quit();
	}
	
	return 0;
}


