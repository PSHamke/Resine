#pragma once


#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"
namespace Resine {
	class RESINE_API Log
	{
	public:
		
		static void Init();
		
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}


// Core log macros
#define RS_CORE_WARN(...)        ::Resine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define RS_CORE_INFO(...)        ::Resine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define RS_CORE_TRACE(...)       ::Resine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define RS_CORE_ERROR(...)       ::Resine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define RS_CORE_FATAL(...)       ::Resine::Log::GetCoreLogger()->critical(__VA_ARGS__)
								   			
// Client log macros			   			
#define RS_CLIENT_ERROR(...)     ::Resine::Log::GetClientLogger()->error(__VA_ARGS__)
#define RS_CLIENT_WARN(...)      ::Resine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define RS_CLIENT_INFO(...)      ::Resine::Log::GetClientLogger()->info(__VA_ARGS__)
#define RS_CLIENT_TRACE(...)     ::Resine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define RS_CLIENT_FATAL(...)     ::Resine::Log::GetClientLogger()->critical(__VA_ARGS__)
