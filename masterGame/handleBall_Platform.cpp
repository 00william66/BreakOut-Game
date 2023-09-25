#include "BreakOutDem.h"

void BreakOutDem::handleBall_Platform(Balls& ball, Platform& platform) {

	sf::FloatRect ballBounds = ball.getGlobalBounds();
	sf::FloatRect paddleBounds = platform.getGlobalBounds();
	
    if (ballBounds.intersects(paddleBounds)) {

        paddleCollisionFunc(ball, platform);

    }
}

