#pragma once
#include <iostream>
#include <memory>
#include <print>
#include <string>

#include <SFML/Graphics.hpp>
#include <SFML/Window/VideoMode.hpp>
#include "framework/App.h"

namespace ly
{
	class App;
}
	

extern ly::App* GetApp(); //extern implemented elsewhere