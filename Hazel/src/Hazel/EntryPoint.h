#pragma once
#include "../Hazel.h"
#include <stdio.h>
#ifdef HZ_PLATFORM_WINDOWS

//extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char **argv)
{
	printf("Hazel Engine running!");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif