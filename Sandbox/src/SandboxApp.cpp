#include <Hazel.h>
#include <Hazel/Core/EntryPoint.h>

#include "Sandbox2D.h"
#include "ExampleLayer.h"

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
		// PushLayer(new ExampleLayer());
		PushLayer(new Sandbox2D());
	}

	~Sandbox()
	{
	}
};
int main(){
	Hazel::Application* app = new Sandbox();
	app->Run();
} 
Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}