#ifndef SNAKE_GAME_SNAKE_H
#define SNAKE_GAME_SNAKE_H

#include <SFML/Graphics.hpp>
#include <vector>

class Snake {
private:
    std::vector<sf::RectangleShape> body; // The snakes body
    sf:: Vector2f direction;              // Current movement direction
    float blockSize;                      // The size of each segment
    bool canChangeDirection;              // Prevents turning multiple times in a frame

public:
    Snake(float blockSize);
    void move();                                            // Move the snake
    void grow();                                            // Add a new segment
    void setDirection(sf::Vector2f newDirection);           // Change the movement direction
    sf::Vector2f getHeadPosition() const;                   // Get the snakes head position
    const std::vector<sf::RectangleShape>& getBody() const; // Get the snakes body
    bool checkSelfCollision() const;                        // Check if the snake collides with itself
};

#endif //SNAKE_GAME_SNAKE_H