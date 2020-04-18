#pragma once
#define DLL_EXPORT __declspec( dllexport )

#include <memory>

namespace sdl_native_lib
{	
	/// <summary>
	/// <see cref="core"/> defines the interface with which to interact with
	/// the logic defined in this dll.
	/// </summary>
	class DLL_EXPORT core {
	public:
		virtual ~core() = default;

		core(const core& other) = default;
		core& operator=(const core& other) = default;
		
		core(core&& other) = default;
		core& operator=(core&& other) = default;
		
		static std::unique_ptr<core> construct();

		virtual void initialise() = 0;
		virtual void initialise(const void* p_native_window) = 0;
		
		virtual void update() = 0;
		[[nodiscard]] virtual bool should_quit() const = 0;

	protected:
		core() = default;
	};
}
