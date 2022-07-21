#include <Resine.h>

class ExampleLayer : public Resine::Layer {
public:
	ExampleLayer()
		:Layer("Example"){}

	void OnUpdate() override {
		RS_CLIENT_INFO("ExampleLayer::Update");
	}

	void OnEvent(Resine::Event& event) override {
		RS_CLIENT_INFO("{0}", event);
	}
};



class Sandbox : public Resine::Application {
public:
	Sandbox() {
		PushLayer(new ExampleLayer());
		PushOverlay(new Resine::ImGuiLayer());
	}
	~Sandbox() {

	}
};


Resine::Application* Resine::CreateApplication() {
	return new Sandbox();
}