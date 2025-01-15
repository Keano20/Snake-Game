#include "Headers/Snake.h"

// Constructor: Initialize the snake
Snake::Snake(float blockSize)
        : blockSize(blockSize), direction({1, 0}), canChangeDirection(true) {
    sf::RectangleShape head(sf::Vector2f(blockSize, blockSize));
    head.setFillColor(sf::Color::Green);
    head.setPosition(100.f, 100.f); // Starting position
    body.push_back(head);
}

