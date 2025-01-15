#include <iostream>
#include <SFML/Graphics.hpp>
#include "Headers/Food.h"
#include "Headers/Snake.h"

int main() {
    // Set up the game window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Hungry Snake");
    window.setFramerateLimit(10);

    // Initialize the Food object
    Food food(800 / 20, 600 / 20); // Grid size for food (20x20 blocks)
    sf::RectangleShape foodShape(sf::Vector2f(20.f, 20.f)); // Food size: 20x20 pixels
    foodShape.setFillColor(sf::Color::Red); // Red food color

    // Initialize the snake object
    Snake snake(20.f); // snake with a block size of 20 pixels

    // Game loop
    while (window.isOpen()) {
        // Handle window events
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        // Handle input for Snake direction
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            snake.setDirection({0, -1});
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            snake.setDirection({0, 1});
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            snake.setDirection({-1, 0});
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            snake.setDirection({1, 0});
        }

        // Move the snake
        snake.move();

        // Check if the snake eats the food
        if (snake.getHeadPosition() == sf::Vector2f(food.getX() * 20, food.getY() * 20)) {
            snake.grow();
        }

        // Check for self-collisions
        if (snake.checkSelfCollision()){
            std::cout << "Game Over!" << std::endl;
            window.close();
        }

        // Clear the screen with a green background
        window.clear(sf::Color(201, 253, 201));

        // Draw the food
        foodShape.setPosition(food.getX() * 20.f, food.getY() * 20.f);
        window.draw(foodShape);

        // Draw the snake
        for (const auto& segment : snake.getBody()){
            window.draw(segment);
        }

        // Display the content
        window.display();

    }

    return 0;
}