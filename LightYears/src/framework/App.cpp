#include "framework/App.h"


namespace ly
{
	App::App()
		:m_mode{ sf::Vector2u(1024,1240) }, m_window{ m_mode,"Light Years" }
	{

	}

	//gameloop
	void App::Run()
	{
		while (m_window.isOpen())
		{
			while (const std::optional event = m_window.pollEvent())
			{
				if (event->is<sf::Event::Closed>())
				{
					m_window.close();
				}

			}
		}
	}


}