#include <iostream>
#include <string>

#include <SDL2/SDL.h>

// Required for SDL2.
#undef main 

/// <summary>
/// Entry point of the SDLNativeApplication.
/// </summary>
/// <returns>
/// Return code of this application.
/// </returns>
int main()
{
	SDL_Init(SDL_INIT_VIDEO);
	atexit(SDL_Quit);

	const std::string title = "SDL Native App";
	const auto p_window = SDL_CreateWindow(title.c_str(), 100, 100, 1200, 600, SDL_WINDOW_SHOWN);

	const auto p_renderer = SDL_CreateRenderer(p_window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Event sdl_event;
	bool should_quit = false;

	while (!should_quit)
	{
		SDL_RenderClear(p_renderer);
		SDL_RenderPresent(p_renderer);
		SDL_Delay(10);
		
		while (SDL_PollEvent(&sdl_event))
		{
			if (sdl_event.type != SDL_QUIT) continue;
			should_quit = true;
			break;
		}
	}
}
