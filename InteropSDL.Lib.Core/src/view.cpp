#include "pch.h"
#include "InteropSDL.Lib.Core/view.h"


namespace interop_sdl::lib::core {
	view::view() {}

	
	view::~view() { }


	void view::initialise(void* p_native_window) { }


	void view::update() { }

	
	bool view::should_exit()
	{
		return false;
	}
}
