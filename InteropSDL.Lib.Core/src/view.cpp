#include "pch.h"
#include "InteropSDL.Lib.Core/view.h"


namespace interop_sdl::lib::core {
	view::view() : p_view_(new impl::view()) {}

	
	view::~view() {
		delete this->p_view_;
	}


	void view::initialise(void* p_native_window) {
		this->p_view_->initialise(p_native_window);
	}


	void view::update() {
		this->p_view_->update();
	}

	
	bool view::should_exit()
	{
		return this->p_view_->should_quit();
	}
}
