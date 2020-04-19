#include "../include/view_core.h"


namespace interop_sdl {
namespace core {
	view_core::view_core() { }

	
	view_core::~view_core() { }


	void view_core::initialise(void* p_native_window) { }


	void view_core::update() { }


	bool view_core::should_exit()
	{
		return false;
	}
}
}