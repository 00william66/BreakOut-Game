#include "Platform.h"
#include <iostream>
void Platform::updatePlatform(sf::Time deltaTime, bool& IsMovingLeft, bool& IsMovingRight, bool& acelera){
	
	float PlayerSpeed = 300;
	float celeraMuito = 450;
	sf::Vector2f movement(0.f, 0.f);

	if (IsMovingLeft && !IsMovingRight) {
		if (plates_.getPosition().x <= 50 + 10) {
			movement.x = 0.f;
		}
		else	
		movement.x -= PlayerSpeed;
	}

	if (IsMovingRight && !IsMovingLeft) {
		if (plates_.getPosition().x >= 800 - 50 - 10) {
			movement.x = 0.f;
		}
		else	
		movement.x += PlayerSpeed;
	}

	if (IsMovingLeft && acelera) {
		if (plates_.getPosition().x <= 50 + 10) {
			movement.x = 0.f;
		}
		else
		movement.x -= celeraMuito;
	}

	if (IsMovingRight && acelera) {
		if (plates_.getPosition().x >= 800 - 50 - 10) {
			movement.x = 0.f;
		}
		else
		movement.x += celeraMuito;
	}

	plates_.move(movement * deltaTime.asSeconds());
	
}
	