#include "gameFramework/GameApp.h"

ly::App* GetApp()
{
	return new ly::GameApp;
}

namespace ly
{
	GameApp::GameApp()
	{
		LoadWorld<World>();
	}
}