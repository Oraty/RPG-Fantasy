#include "Game.hpp"

#include <SFML/Graphics.hp>

Game::Game()
{
	_window.create(sf::VideoMode(800, 600, 32), "RPG-Fantasy");
}

void Game::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate;
	while (_window.isOpen())
	{
		timeSinceLastUpdate = clock.getElapsedTime();

		// We want to have a fixed time step
		if (timeSinceLastUpdate > TimePerFrame)
		{
			timeSinceLastUpdate -= TimePerFrame;
			processEvents();
			update(TimePerFrame); // We update the game with the TimePerFrame
		}
		update(TimePerFrame);
		render();
	}
}

void Game::processEvents()
{
	sf::Event event;
	while (_window.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed :
			_window.close();
			break;

		case sf::Event::KeyPressed :
			if (event.key.code == sf::Keyboard::Escape) // We can also Escape to close the window
				_window.close();
			break;

		default :
			break;
		}
	}
}

void Game::update(sf::Time deltaTime)
{
}

void Game::render()
{
	_window.clear();
	_window.display();
}