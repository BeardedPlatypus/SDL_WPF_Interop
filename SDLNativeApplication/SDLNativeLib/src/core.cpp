#include "pch.h"
#include "core.h"
#include "core_impl.h"


namespace sdl_native_lib
{
	std::unique_ptr<core> core::construct()
	{
		return std::make_unique<local::core_impl>();
	}
}
