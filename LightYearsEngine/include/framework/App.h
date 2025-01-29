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
		void TickInternal(float delta_time);
		void RenderInternal();
		virtual void Render();
		virtual void Tick(float delta_time);


		sf::VideoMode m_mode;
		sf::RenderWindow m_window; //member varible window
		float m_target_frame_rate;
		sf::Clock m_tick_clock; //keeps a record of the timing
	};

}