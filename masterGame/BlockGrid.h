#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include "Balls.h"

class BlockGrid
{
private:

	std::vector<sf::RectangleShape> gridObjects_;
	bool board_[11][7];


public:
	BlockGrid();
	void renderGrid(sf::RenderWindow& window);
	std::vector<sf::RectangleShape> modifiableVector();
	void setGrid(std::vector<sf::RectangleShape>);
	void blockCollisionFunc(Balls&);
};

