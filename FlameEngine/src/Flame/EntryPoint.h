#pragma once

#ifdef FE_PLATFORM_WINDOWS

extern Flame::Application* Flame::CreateApplication();

int main(int argc, char** argv)
{

	auto app = Flame::CreateApplication();
	app->Update();

	delete app;

	return 0;
}

#endif