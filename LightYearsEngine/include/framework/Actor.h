#pragma once

namespace ly 
{
	class World;
	class Actor
	{
		public:
			Actor(World * owning_world);
			virtual ~Actor();
			void BeginPlayInternal();
			virtual void BeginPlay();
			virtual void Tick(float delta_time);

		private:
			World* m_owning_world;
			bool m_has_began_play;


	};

}