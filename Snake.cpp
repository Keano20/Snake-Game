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