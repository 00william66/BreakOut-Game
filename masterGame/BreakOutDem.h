#pragma once



#include <iostream>
#include <SFML/Graphics.hpp>
#include <cmath>
#include <vector>
#include "Balls.h"
#include "Platform.h"
#include "BlockGrid.h"

#define M_PI 3.14159265359

class BreakOutDem
{
public:
	BreakOutDem();
	void run();
	void renderAll();
	
private:

	void processEvents();
	void handlePlayerInput(sf::Keyboard::Key, bool);
	void handleBall_Platform(Balls& ball, Platform& platform);
	void paddleCollisionFunc(Balls& , Platform& );
	float calculateReflectionAngle(const sf::Vector2f& contactPoint, const Platform& platform);
	sf::Vector2f adjustVelocity(sf::Vector2f&, float);


private:
	bool mIsMovingLeft = false;
	bool mIsMovingRight = false;
	bool acelera_ = false;
	Platform plate_;
	Balls ball_;
	BlockGrid grid_;

	sf::RenderWindow window_;


	

};

