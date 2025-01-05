#include <iostream>
#include <SFML/Graphics.hpp>
#include "Headers/Snake.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Hungry Snake");
    window.setFramerateLimit(60); // Limits the framerate

    // The game loop
    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window with a color
        window.clear(sf::Color(201, 253, 201)); // Green background

        // Display the content
        window.display();
    }

    return 0;
}