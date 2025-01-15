#include "Headers/Snake.h"

// Constructor: Initialize the snake
Snake::Snake(float blockSize)
        : blockSize(blockSize), direction({1, 0}), canChangeDirection(true) {
    sf::RectangleShape head(sf::Vector2f(blockSize, blockSize));
    head.setFillColor(sf::Color::Green);
    head.setPosition(100.f, 100.f); // Starting position
    body.push_back(head);
}

// Move the snake
void Snake::move() {
    for (std::size_t i = body.size() - 1; i > 0; --i) {
        body[i].setPosition(body[i - 1].getPosition());
    }
    body[0].move(direction.x * blockSize, direction.y * blockSize);
    canChangeDirection = true;
}

// Grow the snake
void Snake::grow() {
    sf::RectangleShape newSegment(sf::Vector2f(blockSize, blockSize));
    newSegment.setFillColor(sf::Color::Green);
    newSegment.setPosition(body.back().getPosition());
    body.push_back(newSegment);
}

// Change direction
void Snake::setDirection(sf::Vector2f newDirection) {
    if (canChangeDirection && (direction.x + newDirection.x != 0 || direction.y + newDirection.y != 0)) {
        direction = newDirection;
        canChangeDirection = false;
    }
}

// Get the head position
sf::Vector2f Snake::getHeadPosition() const {
    return body[0].getPosition();
}

// Get the body
const std::vector<sf::RectangleShape>& Snake::getBody() const {
    return body;
}

// Check for self-collision
bool Snake::checkSelfCollision() const {
    sf::Vector2f headPosition = body[0].getPosition();
    for (std::size_t i = 1; i < body.size(); ++i) {
        if (body[i].getPosition() == headPosition) {
            return true;
        }
    }
    return false;
}