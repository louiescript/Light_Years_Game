#pragma once

namespace ly
{
	class App; 
	class World
	{
	public:
		World(App* owning_app);//let's the world know who owns it

		void BeginPlayInternal();
		void TickInternal(float deltaTime);

		virtual ~World();//whenever you want thing to be inherited you need to have a virtual destructor to destruct things properly, otherwise it only calls the parent destructor

	private:
		void BeginPlay();
		void Tick(float deltaTime);


		App* m_owning_app;
		bool m_begin_play;
	};
}