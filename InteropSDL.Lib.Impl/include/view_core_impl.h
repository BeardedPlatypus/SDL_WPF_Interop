#pragma once

#include <SDL2/SDL.h>


namespace interop_sdl::lib::impl
{

class view_core_impl {
public:
	view_core_impl() = default;

	void initialise();
	void initialise(const void* p_native_window);

	void update();

	[[nodiscard]] bool should_quit() const;

private:
	SDL_Window* p_window_ = nullptr;
	SDL_Renderer* p_renderer_ = nullptr;

	bool should_quit_ = false;
};
}
