#pragma once

#include <SDL2/SDL.h>

#include "core.h"


namespace sdl_native_lib::local
{	
	/// <summary>
	/// <see cref="core_impl"/> implements the interface with which to interact
	/// with the logic defined in this dll.
	/// </summary>
	/// <seealso cref="core" />
	class core_impl final : public core
	{
	public:
		core_impl();

		void initialise() override;
		void initialise(const void* p_native_window) override;
		
		void update() override;

		[[nodiscard]] bool should_quit() const override;

	private:
		SDL_Window* p_window_ = nullptr;
		SDL_Renderer* p_renderer_ = nullptr;

		bool should_quit_ = false;
	};
}
