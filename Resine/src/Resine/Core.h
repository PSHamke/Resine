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
