#pragma once

#include <SDL2/SDL.h>


namespace interop_sdl {
namespace lib {
namespace impl {

class view_core {
public:
	view_core() = default;

	void initialise();
	void initialise(const void* p_native_window);

	void update();

	bool should_quit() const;

private:
	SDL_Window* p_window_ = nullptr;
	SDL_Renderer* p_renderer_ = nullptr;

	bool should_quit_ = false;
};
	
}
}
}
