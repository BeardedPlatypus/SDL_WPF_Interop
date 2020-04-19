#pragma once

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
	};
}
}
}
