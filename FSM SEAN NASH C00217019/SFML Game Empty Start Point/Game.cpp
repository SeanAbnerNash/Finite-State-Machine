//@Author Sean Nash De Andrade
//@Login C00217019
//Time Taken: 1.30 Hours
//Known Issues: None
//Brief: Create a Finite State Machine that swaps between a set number of states.
#include "Animation.h"
#include "ClimbState.h"
#include <iostream>
#include "Game.h"


Game::Game() :
	m_window{ sf::VideoMode{ 800, 600, 32 }, "Finite State Machine" },
	m_exitGame{false} //when true game will exit
{
}


Game::~Game()
{
}


void Game::run()
{
	m_notIdle = false;
	m_notIdleTracker = 0;
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time timePerFrame = sf::seconds(1.f / 60.f); // 60 fps
	while (m_window.isOpen())
	{
		processEvents(); // as many as possible
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			processEvents(); // at least 60 fps
			update(timePerFrame); //60 fps
		}
		render(); // as many as possible
	}
}
/// <summary>
/// handle user and system events/ input
/// get key presses/ mouse moves etc. from OS
/// and user :: Don't do game update here
/// </summary>
void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if ( sf::Event::Closed == event.type) // window message
		{
			m_window.close();
		}
		if (sf::Event::KeyPressed == event.type) //user key press
		{
			if (sf::Keyboard::Escape == event.key.code)
			{
				m_exitGame = true;
			}
		}
		if (event.type == sf::Event::KeyReleased)
		{

			if (event.key.code == sf::Keyboard::W)//Jump
			{
				m_notIdle = true;
				m_notIdleTracker = 0;
				fsm.m_jumping();
			}
			if (event.key.code == sf::Keyboard::D)//Climb
			{
				m_notIdle = true;
				m_notIdleTracker = 0;
				fsm.m_climbing();
			}
			
		}
	}
	if (m_notIdle == true)//Increments tracker if not idle
	{
		++m_notIdleTracker;
	}
	if (m_notIdleTracker >= 6000)//After a period of time when the user does not sets back to idle
	{
		m_notIdle = false;
		m_notIdleTracker = 0;
		fsm.m_idle();
	}
}

/// <summary>
/// Update the game world
/// </summary>
/// <param name="t_deltaTime">time interval per frame</param>
void Game::update(sf::Time t_deltaTime)
{
	if (m_exitGame)
	{
		m_window.close();
	}
}

/// <summary>
/// draw the frame and then switch bufers
/// </summary>
void Game::render()
{
	m_window.clear(sf::Color::Black);
	m_window.display();
}

