
#include <Resine.h>


class Sandbox : public Resine::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};


Resine::Application* Resine::CreateApplication() {
	return new Sandbox();
}