#pragma once

namespace interop_sdl::lib::impl {

class view {
public:
	view() = default;

	void initialise();
	void initialise(const void* p_native_window);

	void update();
	[[nodiscard]] bool should_quit() const;
};
}
