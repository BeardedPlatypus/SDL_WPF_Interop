#include "pch.h"
#include "../include/view_core.h"

#include <string>

// TODO: Add proper clean up code.

namespace interop_sdl::lib::impl
{

	void view_core::initialise()
	{
		SDL_Init(SDL_INIT_VIDEO);
		atexit(SDL_Quit);

		const std::string title = "SDL Native App";

		this->p_window_ = SDL_CreateWindow(title.c_str(), 100, 100, 1200, 600, SDL_WINDOW_SHOWN);
		this->p_renderer_ = SDL_CreateRenderer(this->p_window_, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	}

	void view_core::initialise(const void* p_native_window)
	{
		SDL_Init(SDL_INIT_VIDEO);
		atexit(SDL_Quit);
		
		this->p_window_ = SDL_CreateWindowFrom(p_native_window);
		this->p_renderer_ = SDL_CreateRenderer(this->p_window_, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	}

	void view_core::update()
	{
		SDL_RenderClear(this->p_renderer_);
		SDL_RenderPresent(this->p_renderer_);
		SDL_Delay(10);

		SDL_Event sdl_event;
		while (SDL_PollEvent(&sdl_event))
		{
			if (sdl_event.type != SDL_QUIT) continue;
			this->should_quit_ = true;
			break;
		}
	}

	inline bool view_core::should_quit() const
	{
		return this->should_quit_;
	}
}