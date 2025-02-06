#include "gameFramework/GameApp.h"
#include "framework/World.h"
#include "framework/Actor.h"

ly::App* GetApp()
{
	return new ly::GameApp{};
}

namespace ly
{
	GameApp::GameApp()
	{
		weak<World>new_world = LoadWorld<World>();
		new_world.lock()->SpawnActor<Actor>();
		new_world.lock()->SpawnActor<Actor>();
		new_world.lock()->SpawnActor<Actor>();
		new_world.lock()->SpawnActor<Actor>();
		new_world.lock()->SpawnActor<Actor>();
		new_world.lock()->SpawnActor<Actor>();
	}
}