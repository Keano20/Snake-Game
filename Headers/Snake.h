#ifndef SNAKE_GAME_SNAKE_H
#define SNAKE_GAME_SNAKE_H

#include <SFML/Graphics.hpp>
#include <vector>

class Snake {
private:
    std::vector<sf::RectangleShape> body;
    sf:: Vector2f direction;
    float blockSize;
    bool canChangeDirection;

public:
    Snake(float blockSize);
    void move();
    void grow();
    void setDirection(sf::Vector2f newDirection);
    sf::Vector2f getHeadPosition() const;
    const std::vector<sf::RectangleShape>& getBody() const;
    bool checkSelfCollision() const;
};

#endif //SNAKE_GAME_SNAKE_H