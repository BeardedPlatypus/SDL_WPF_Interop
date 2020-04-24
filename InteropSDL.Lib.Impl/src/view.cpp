#include "pch.h"
#include "InteropSDL.Lib.Impl/view.h"


namespace interop_sdl::lib::impl
{

	void view::initialise() { }

	void view::initialise(const void* p_native_window) { }

	void view::update() { }

	bool view::should_quit() const
	{
		return false;
	}
}