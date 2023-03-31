#pragma once

#ifdef FE_PLATFORM_WINDOWS
	#ifdef FE_BUILD_DLL
		#define FLAME_API __declspec(dllexport)
	#else
		#define FLAME_API __declspec(dllimport)
	#endif
#else
	#error Flame only supported on Windows x64!
#endif