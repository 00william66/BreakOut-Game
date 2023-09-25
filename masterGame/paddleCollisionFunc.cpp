#include "BreakOutDem.h"

void BreakOutDem::paddleCollisionFunc(Balls& balll, Platform& platformm) {

    sf::Vector2f contact = balll.getPosition();

    float angle = calculateReflectionAngle(contact, platformm);

    std::cout << angle << std::endl;

    sf::Vector2f velocityMod = balll.getVelocity();

    sf::Vector2f newVelocity = adjustVelocity(velocityMod, angle);


    balll.setVelocity(newVelocity);
}
