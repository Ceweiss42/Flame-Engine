#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Flame
{
	class FLAME_API Log
	{
	public:
		static void Start();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}


//Core Logging Macros
#define FE_CORE_ERROR(...)   ::Flame::Log::GetCoreLogger()->error(__VA_ARGS__)
#define FE_CORE_WARNING(...) ::Flame::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define FE_CORE_TRACE(...)   ::Flame::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define FE_CORE_INFO(...)    ::Flame::Log::GetCoreLogger()->info(__VA_ARGS__)
#define FE_CORE_FATAL(...)   ::Flame::Log::GetCoreLogger()->fatal(__VA_ARGS__)


//Client Logging Macros
#define FE_ERROR(...)   ::Flame::Log::GetClientLogger()->error(__VA_ARGS__)
#define FE_WARNING(...) ::Flame::Log::GetClientLogger()->warn(__VA_ARGS__)
#define FEE_TRACE(...)  ::Flame::Log::GetClientLogger()->trace(__VA_ARGS__)
#define FE_INFO(...)    ::Flame::Log::GetClientLogger()->info(__VA_ARGS__)
#define FE_FATAL(...)   ::Flame::Log::GetClientLogger()->fatal(__VA_ARGS__)

