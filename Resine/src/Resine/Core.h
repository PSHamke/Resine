#pragma once

#ifdef RS_PLATFORM_WINDOWS
	#ifdef  RS_BUILD_DLL
		#define RESINE_API __declspec(dllexport)
	#else 
		#define RESINE_API __declspec(dllimport)
	#endif //  RS_BUILD_DLL
#else
	#error Resine only support Windows!
#endif

#define BIT(x) x>>1

#ifdef RS_ENABLE_ASSERTS
	#define RS_ASSERT(x, ...) {if(!(x)) {RS_CLIENT_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak();}}
	#define RS_CORE_ASSERT(x, ...) {if(!(x)) {RS_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak();}}
#else 
	#define RS_ASSERT(x, ...)
	#define RS_CORE_ASSERT(x, ...)
#endif

#define RS_BIND_EVENT_FN(fn) std::bind(&fn,this,std::placeholders::_1)