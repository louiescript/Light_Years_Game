#include "framework/App.h"
#include <print>
#include <cmath>

namespace ly
{
	App::App()
		:m_mode{ sf::Vector2u(1024,1240) }, m_window{ m_mode,"Light Years" }, m_target_frame_rate{ 60.0f }, m_tick_clock{}
	{

	}

	//gameloop
	void App::Run()
	{
		m_tick_clock.restart();
		float accumulated_time = 0.f;//records time passed
		float target_delta_time = 1.f / m_target_frame_rate; //one second over 60
		while (m_window.isOpen())
		{
			while (const std::optional event = m_window.pollEvent())
			{
				if (event->is<sf::Event::Closed>())
				{
					m_window.close();
				}

			}
			//calculates ammount of time elapsed

			accumulated_time += m_tick_clock.restart().asSeconds();

			//tagreting a specific delta time
			while (accumulated_time > target_delta_time)
			{
				//start updating
				accumulated_time -= target_delta_time;
				Tick(target_delta_time);
				Render();
			}
		}
	}

	void App::Tick(float delta_time)
	{
		std::println("ticking at framerate: {:.1f}",(1.f / delta_time));
	}

	void App::Render()
	{

	}


}