#include <iostream>
#include <print>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window/VideoMode.hpp>
//#include <SFML/Audio.hpp>
//#include <SFML/System.hpp>
//#include <SFML/Window.hpp>



int main()
{
	
	sf::VideoMode mode(sf::Vector2u(100,100));
	sf::RenderWindow renderWindow{mode,"MyWindow"};

	std::string new_name{ "timothy" };

	std::println("{}", new_name);

	std::print("15.5");


}