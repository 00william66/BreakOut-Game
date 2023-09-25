#include "BreakOutDem.h"
#include "Balls.h"

void Platform::renderPlatform(sf::RenderWindow& window) {
	window.draw(plates_);
}