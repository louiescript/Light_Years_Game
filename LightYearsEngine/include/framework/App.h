#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window/VideoMode.hpp>
#include "framework/Core.h"

//says that everything created belongs to ly namespace, prevents name clashing
namespace ly
{
	class World;
	class App
	{
	public:
		App(); //alt enter to create definition automatically
		void Run();

		template<typename WorldType>
		weak<WorldType> LoadWorld();//weak because should not have ownership

	private:
		void TickInternal(float delta_time);
		void RenderInternal();
		virtual void Render();
		virtual void Tick(float delta_time);


		sf::VideoMode m_mode;
		sf::RenderWindow m_window; //member varible window
		float m_target_frame_rate;
		sf::Clock m_tick_clock; //keeps a record of the timing

		shared<World> current_world;
	};

	template<typename WorldType>
	weak<WorldType> App::LoadWorld()
	{
		shared<WorldType> new_world{ new WorldType{this} }; //we are using new bcz makeshare limits it to std library
		current_world = new_world;
		return new_world;
	}


}