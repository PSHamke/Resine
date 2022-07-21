#pragma once

#ifdef RS_PLATFORM_WINDOWS

extern Resine::Application* Resine::CreateApplication();

int main(int argc, char**argv) {
	Resine::Log::Init();
	RS_CORE_WARN("Initialized Log!");
	RS_CORE_INFO("Hi!");
	int a = 6;
	RS_CLIENT_INFO("Test Var = {0}", a);

	auto app = Resine::CreateApplication();
	app->Run();
	delete app;

}
#endif