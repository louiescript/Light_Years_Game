#include <iostream>
#include <memory>
#include <print>
#include <string>

#include <SFML/Graphics.hpp>
#include <SFML/Window/VideoMode.hpp>
#include "framework/App.h"

//#include <SFML/Audio.hpp>
//#include <SFML/System.hpp>
//#include <SFML/Window.hpp>



int main()
{
	//allocating the heap. entire application to heap
	//ly::App* app = new ly::App();
	//app->Run();

	//allocating using unique ptr
	std::unique_ptr<ly::App> app{ std::make_unique<ly::App>() };
	app->Run();
}