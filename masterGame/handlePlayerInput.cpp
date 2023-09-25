#include "BreakOutDem.h"

void BreakOutDem::handlePlayerInput(sf::Keyboard::Key key, bool isPressed) {
	
	if (key == sf::Keyboard::A)
		mIsMovingLeft = isPressed;
	if (key == sf::Keyboard::D)
		mIsMovingRight = isPressed;
	if (key == sf::Keyboard::LControl)
		acelera_ = isPressed;

}

