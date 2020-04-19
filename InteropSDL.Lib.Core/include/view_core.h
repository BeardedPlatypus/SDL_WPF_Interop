#pragma once
#include "view_core_impl.h"

namespace interop_sdl {
namespace lib {
namespace core {
	public ref class view_core sealed {
	public:
		view_core();
		~view_core();

		void initialise(void* p_native_window);
		void update();
		bool should_exit();

	private:
		impl::view_core_impl* p_view_core_impl_;
	};
}
}
}
