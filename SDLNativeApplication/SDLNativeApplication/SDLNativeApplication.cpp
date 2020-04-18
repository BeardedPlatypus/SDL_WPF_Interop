#include <core.h>

// Required for SDL2.
#undef main 

/// <summary>
/// Entry point of the SDLNativeApplication.
/// </summary>
/// <returns>
/// Return code of this application.
/// </returns>
int main()
{
	auto p_core = sdl_native_lib::core::construct();
	p_core->initialise();

	while (!p_core->should_quit())
	{
		p_core->update();
	}
}
