#include "framework/World.h"
#include "framework/Core.h"
#include "framework/Actor.h"

ly::World::World(App* owning_app)
	:m_owning_app{ owning_app },
	m_begin_play{ false }, m_actors{}, m_pending_actors{}
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
	for (shared<Actor> actor : m_pending_actors)
	{
		m_actors.push_back(actor);
		actor->BeginPlayInternal();
	}
	m_pending_actors.clear();

	for (shared<Actor> actor : m_actors)
	{
		actor->Tick(deltaTime);
	}

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


