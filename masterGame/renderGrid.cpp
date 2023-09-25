#include "BlockGrid.h"

void BlockGrid::renderGrid(sf::RenderWindow& window) {
	for (int i = 0; i < gridObjects_.size(); i++) {
		window.draw(gridObjects_[i]);
	}
}