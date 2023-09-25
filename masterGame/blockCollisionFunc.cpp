#include "BreakOutDem.h"

void BlockGrid::blockCollisionFunc(Balls& bola) {
    sf::FloatRect ballBound = bola.getGlobalBounds();

    // Use an it based loop to safely remove elements
    for (auto it = gridObjects_.begin(); it != gridObjects_.end();) {
        if (ballBound.intersects(it->getGlobalBounds())) {
            gridObjects_.erase(it); 
            sf::Vector2f newVelo(bola.getVelocity().x, -bola.getVelocity().y);
            bola.setVelocity(newVelo);
            std::cout << "hit" << std::endl;
        }
        else {
            ++it; // Move to the next iterator
        }
    }
}

