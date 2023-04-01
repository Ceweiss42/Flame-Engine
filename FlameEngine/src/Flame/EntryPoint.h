#pragma once

#ifdef FE_PLATFORM_WINDOWS

extern Flame::Application* Flame::CreateApplication();

int main(int argc, char** argv)
{

	Flame::Log::Start();
	FE_CORE_WARNING("Initialzed the Logger!");
	int a = 5;
	FE_INFO("Hello World! Var={0}", a);

	auto app = Flame::CreateApplication();
	app->Update();

	delete app;

	return 0;
}

#endif