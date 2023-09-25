#pragma once

#include <SFML/Graphics.hpp>

class Balls
{
private:
	sf::CircleShape vecball_;
	sf::Vector2f velocity_;
	float ballSpeed;
	
public:
	Balls();
	void renderBall(sf::RenderWindow& window);
	void updateBall(sf::Time);
	void setVelocity(sf::Vector2f&);
	void setPosition(sf::Vector2f&);
	const sf::Vector2f getPosition() const;
	const sf::Vector2f getVelocity() const;
	sf::FloatRect getGlobalBounds() const;
	const float getBallSpeed() const;
	const float getRadius() const;
	


};

