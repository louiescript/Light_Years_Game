#pragma once

#include "framework/Core.h"

namespace ly
{
	class App; 
	class Actor;
	class World
	{
	public:
		World(App* owning_app);//let's the world know who owns it

		void BeginPlayInternal();
		void TickInternal(float deltaTime);

		virtual ~World();//whenever you want thing to be inherited you need to have a virtual destructor to destruct things properly, otherwise it only calls the parent destructor


		template<typename ActorType>
		weak<ActorType> SpawnActor();

	private:
		void BeginPlay();
		void Tick(float deltaTime);
		App* m_owning_app;
		bool m_begin_play;
		
		list<shared<Actor>>m_actors;
		list<shared<Actor>>m_pending_actors;



	};
	template<typename ActorType>
	weak<ActorType> World::SpawnActor()
	{
		shared<ActorType> new_actor{ new ActorType{this} }; //don't understand
		m_pending_actors.push_back(new_actor);
		return new_actor;
	}
}