#include "Balls.h"
#include <iostream>



void Balls::setVelocity(sf::Vector2f& velocity) {
	velocity_ = velocity;
}

void Balls::setPosition(sf::Vector2f& posi) {
	vecball_.setPosition(posi);
}

Balls::Balls() : vecball_(sf::CircleShape(5.f, 15.f)) {
   
    ballSpeed = 200;
	vecball_.setFillColor(sf::Color::Green);
	vecball_.setPosition(400.f, 350.f);
	vecball_.setOrigin(vecball_.getRadius(), vecball_.getRadius());
    sf::Vector2f startingVelocity(0.f, 2.f);
    velocity_ = startingVelocity;
}



void Balls::updateBall(sf::Time deltaTime) {
    sf::Vector2f ballSize(vecball_.getRadius() * 2, vecball_.getRadius() * 2);

    sf::Vector2f displacement = ballSpeed * velocity_ * deltaTime.asSeconds();
    vecball_.move(displacement);

    sf::Vector2f position = vecball_.getPosition();

    // Check for horizontal wall collisions
    if (position.x + vecball_.getRadius() >= 800) {
        velocity_.x = -velocity_.x;
        vecball_.move(sf::Vector2f(800 - (position.x + vecball_.getRadius()), 0));
    } else if (position.x <= 0) {
        velocity_.x = -velocity_.x;
        vecball_.move(sf::Vector2f(-position.x, 0));
    }

    // Check for vertical wall collisions
    if (position.y + vecball_.getRadius() >= 600) {
        vecball_.setPosition(400.f, 350.f);
        sf::Vector2f startingVelocity(0.f, 2.f);
        velocity_ = startingVelocity;
    } else if (position.y + vecball_.getRadius() <= 0) {
        velocity_.y = -velocity_.y;
        vecball_.move(sf::Vector2f(0, -position.y));
    }
    
}


const sf::Vector2f Balls::getPosition() const {
	return vecball_.getPosition();
}

const sf::Vector2f Balls::getVelocity() const {
	return velocity_;

}

sf::FloatRect Balls::getGlobalBounds() const {
	return vecball_.getGlobalBounds();
}

const float Balls::getBallSpeed() const{
    return ballSpeed;
}


