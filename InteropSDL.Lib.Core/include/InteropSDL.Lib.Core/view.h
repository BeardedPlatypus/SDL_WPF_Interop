#pragma once
#include "InteropSDL.Lib.Impl/view.h"

namespace interop_sdl {
namespace lib {
namespace core {
	public ref class view sealed {
	public:
		view();
		~view();

		void initialise(void* p_native_window);
		void update();
		bool should_exit();

	private:
		impl::view* p_view_;
	};
}
}
}
