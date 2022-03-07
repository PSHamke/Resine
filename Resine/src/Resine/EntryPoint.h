#pragma once

#ifdef RS_PLATFORM_WINDOWS

extern Resine::Application* Resine::CreateApplication();

int main(int argc, char**argv) {


	auto app = Resine::CreateApplication();

	app->Run();
	delete app;

}
#endif