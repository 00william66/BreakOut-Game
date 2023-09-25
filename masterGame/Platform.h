#pragma once

#include <SFML/Graphics.hpp>

class Platform
{
private:

    sf::RectangleShape plates_;
   
public:
    Platform();
    void updatePlatform(sf::Time deltaTime, bool&, bool&, bool&);
    void renderPlatform(sf::RenderWindow&);
    const sf::Vector2f getPosition() const;
    const float getWidth() const;
    sf::FloatRect getGlobalBounds() const;
    const sf::Vector2f getSize() const;
};
