#include "BlockGrid.h"

BlockGrid::BlockGrid() {
	for (int i = 0; i < 11; ++i) {
		for (int j = 0; j < 7; ++j) {
			board_[i][j] = true;
		}
	}

	sf::RectangleShape object;

	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 7; j++) {
			if (board_[i][j] == true) {
				object.setSize(sf::Vector2f(100, 25));
				object.setPosition(sf::Vector2f(20 + j * (100 + 10), 10 + i * (25 + 5)));
				object.setFillColor(sf::Color::Red);
				gridObjects_.push_back(object);
			}
		}
	}
}


std::vector < sf::RectangleShape> BlockGrid::modifiableVector() {
	return gridObjects_;
}

void BlockGrid::setGrid(std::vector<sf::RectangleShape> vec) {
	gridObjects_ = vec;
}

