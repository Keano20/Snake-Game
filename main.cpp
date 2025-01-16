#include <iostream>
#include <SFML/Graphics.hpp>
#include <memory>
#include "Headers/Food.h"
#include "Headers/Snake.h"

int main() {
    // Set up the game window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Hungry Snake");
    window.setFramerateLimit(10);

    // Smart pointers for the Food and Snake with grid and block sizes.
    std::unique_ptr<Food> food = std::make_unique<Food>(800 / 20, 600 / 20);
    std::unique_ptr<Snake> snake = std::make_unique<Snake>(20.f);

    // Create food shape for rendering
    sf::RectangleShape foodShape(sf::Vector2f(20.f, 20.f));
    foodShape.setFillColor(sf::Color::Red);

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
            snake->setDirection({0, -1});
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            snake->setDirection({0, 1});
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            snake->setDirection({-1, 0});
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            snake->setDirection({1, 0});
        }

        // Move the snake
        snake->move();

        // Check if the snake eats the food
        if (snake->getHeadPosition() == sf::Vector2f(food->getX() * 20, food->getY() * 20)) {
            snake->grow();
        }

        // Check for self-collisions
        if (snake->checkSelfCollision()){
            std::cout << "Game Over!" << std::endl;
            window.close();
        }

        // Clear the screen with a green background
        window.clear(sf::Color(201, 253, 201));

        // Draw the food
        foodShape.setPosition(food->getX() * 20.f, food->getY() * 20.f);
        window.draw(foodShape);

        // Draw the snake
        for (const auto& segment : snake->getBody()){
            window.draw(segment);
        }

        // Display the content
        window.display();

    }

    return 0;
}