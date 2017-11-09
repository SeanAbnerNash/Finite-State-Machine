//@Author Sean Nash De Andrade
//@Login C00217019

#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>
#include "Animation.h"

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void update(sf::Time t_deltaTime);
	void render();

	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	bool m_exitGame; // control exiting game
	Animation fsm;//Finite State machine
	bool m_notIdle;//Tracks wether or not animation is idle
	int m_notIdleTracker;//Tracks how long its been since something has been done

};

#endif // !GAME

