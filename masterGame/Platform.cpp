#include "Platform.h"

Platform::Platform() : plates_(sf::Vector2f(100.f, 10.f)) {
	plates_.setFillColor(sf::Color::White);
	plates_.setPosition(400.f, 550.f);
	plates_.setOrigin(plates_.getSize().x / 2.f, plates_.getSize().y / 2.f);
}

const sf::Vector2f Platform::getPosition() const {
	return plates_.getPosition();
}

const float Platform::getWidth() const {
	return plates_.getSize().x;
}

sf::FloatRect Platform::getGlobalBounds() const {
	return plates_.getGlobalBounds();
}


const sf::Vector2f Platform::getSize() const {
	return plates_.getSize();
}
