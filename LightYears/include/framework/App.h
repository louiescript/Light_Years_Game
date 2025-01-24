#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window/VideoMode.hpp>

//says that everything created belongs to ly namespace, prevents name clashing
namespace ly
{
	class App
	{
	public:
		App(); //alt enter to create definition automatically
		void Run();


	private:
		sf::VideoMode m_mode;
		sf::RenderWindow m_window; //member varible window
	};

}