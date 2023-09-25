#include "BreakOutDem.h"

sf::Vector2f BreakOutDem::adjustVelocity(sf::Vector2f& velocity, float angleOfReflection) {
    // Calculate new velocity components based on the angle of reflection
    float angleRadians = angleOfReflection * static_cast<float>(M_PI) / 180.f;
   
    float speed = std::sqrt(velocity.x * velocity.x + velocity.y * velocity.y);

    // Calculate new velocity components
    velocity.x = speed * std::cos(angleRadians);
    velocity.y = speed * std::sin(angleRadians);

    return velocity;
}