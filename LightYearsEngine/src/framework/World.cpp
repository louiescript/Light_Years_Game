#include "framework/World.h"
#include "framework/Core.h"

ly::World::World(App* owning_app)
	:m_owning_app{owning_app},
	m_begin_play{false}
{

}

void ly::World::BeginPlayInternal()
{
	if (!m_begin_play)
	{
		m_begin_play = true;
		BeginPlay();
	}

}

void ly::World::TickInternal(float deltaTime)
{
	Tick(deltaTime);
}

ly::World::~World()
{

}

void ly::World::BeginPlay()
{
	LOG("begin play");
}

void ly::World::Tick(float deltaTime)
{
	LOG("ticking at framerate: {:.1f}", (1.f / deltaTime));
}


