#include "framework/Actor.h"
#include "framework/Core.h"

ly::Actor::Actor(World* owning_world)
	: m_owning_world{owning_world}, m_has_began_play{false}
{

}

ly::Actor::~Actor()
{
}

void ly::Actor::BeginPlayInternal()
{
	if (!m_has_began_play)
	{
		m_has_began_play =  true ;
		BeginPlay();

	}
}

void ly::Actor::BeginPlay()
{
	LOG("Actor begin play");
}

void ly::Actor::Tick(float delta_time)
{
	LOG("Actor Ticking");
}
