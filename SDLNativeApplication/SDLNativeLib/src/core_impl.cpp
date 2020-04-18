#include "pch.h"
#include "core_impl.h"

#include <string>

namespace sdl_native_lib::local
{
	core_impl::core_impl(): core() { }

	void core_impl::initialise()
	{
		SDL_Init(SDL_INIT_VIDEO);
		atexit(SDL_Quit);
		
		const std::string title = "SDL Native App";

		this->p_window = SDL_CreateWindow(title.c_str(), 100, 100, 1200, 600, SDL_WINDOW_SHOWN);
		this->p_renderer = SDL_CreateRenderer(this->p_window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	}

	void core_impl::update()
	{
		SDL_RenderClear(this->p_renderer);
		SDL_RenderPresent(this->p_renderer);
		SDL_Delay(10);

		SDL_Event sdl_event;
		while (SDL_PollEvent(&sdl_event))
		{
			if (sdl_event.type != SDL_QUIT) continue;
			this->_should_quit = true;
			break;
		}
	}

	inline bool core_impl::should_quit() const
	{
		return this->_should_quit;
	}
}
