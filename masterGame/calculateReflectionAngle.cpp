#include "BreakOutDem.h"

float BreakOutDem::calculateReflectionAngle(const sf::Vector2f& contactPoint, const Platform& platformm) {

    // Calculate the angle using atan2
    float angle = atan2(contactPoint.y - platformm.getPosition().y, contactPoint.x - platformm.getPosition().x);

    // Convert angle to degrees
    angle = angle * 180.f / static_cast<float>(M_PI);

    return angle;
}

