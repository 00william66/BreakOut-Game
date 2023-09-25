#include "BreakOutDem.h"

BreakOutDem::BreakOutDem() : window_(sf::VideoMode(800, 600), "MasterGame"){}



void BreakOutDem::run() {

	

	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	const sf::Time TimePerFrame = sf::seconds(1.0f / 60.0f);



	while (window_.isOpen()) {
		processEvents();
		timeSinceLastUpdate += clock.restart();

		while (timeSinceLastUpdate > TimePerFrame) {
			timeSinceLastUpdate -= TimePerFrame;
			processEvents();
			plate_.updatePlatform(TimePerFrame, mIsMovingLeft, mIsMovingRight, acelera_);
			handleBall_Platform(ball_, plate_);
			grid_.blockCollisionFunc(ball_);
			ball_.updateBall(TimePerFrame);
			
			
		}
		renderAll();
	}
}
