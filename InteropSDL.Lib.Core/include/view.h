#pragma once

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
	};
}
}
}
