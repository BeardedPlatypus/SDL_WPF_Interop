#include "../include/view_core.h"


namespace interop_sdl::lib::core {

	view_core::view_core() {} //: p_view_core_impl_(new impl::view_core_impl()) { }

	
	view_core::~view_core()
	{
		//delete this->p_view_core_impl_;
	}


	void view_core::initialise(void* p_native_window)
	{
		//this->p_view_core_impl_->initialise(p_native_window);
	}


	void view_core::update()
	{
		//this->p_view_core_impl_->update();
	}

	bool view_core::should_exit()
	{
		return false;
		//return this->p_view_core_impl_->should_quit();
	}
}