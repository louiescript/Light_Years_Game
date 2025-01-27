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
			float frame_delta_time{ m_tick_clock.restart().asSeconds() };
			accumulated_time += frame_delta_time;

			//targeting a specific delta time, once the framerate hits 60, it updaes
			while (accumulated_time > target_delta_time)
			{
				//start updating
				accumulated_time -= target_delta_time;
				TickInternal(target_delta_time);
				RenderInternal();
			}
			std::println("ticking at framerate: {:.1f}", (1.f / frame_delta_time));
		}
	}

	void App::TickInternal(float delta_time)
	{
		Tick(delta_time);
	}

	void App::RenderInternal()
	{
		m_window.clear(); //step 1 clears window

		Render();
		
		//step 3 clear window
		m_window.display(); //displays change
	}
    //alt-enter to generat render
	void App::Render()
	{

		//step 2. rendering stuff
		//sf::RectangleShape entity{ sf::Vector2f{100,100} };
		sf::CircleShape entity{ {100} };
		entity.setFillColor(sf::Color::Green);
		entity.setOrigin({ 50, 50 });//center of entity
		entity.setPosition({ m_window.getSize().x / 2.f ,m_window.getSize().y / 2.f }); //mooves to center of window
		m_window.draw(entity);


	}

	void App::Tick(float delta_time)
	{

	}




}