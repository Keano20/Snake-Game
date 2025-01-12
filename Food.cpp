#include "Headers/Food.h"
#include <cstdlib>
#include <ctime>

// Constructor
Food::Food(int gridWidth, int gridHeight): gridWidth(gridWidth), gridHeight(gridHeight) {
    std::srand(static_cast<unsigned>(std::time(0))); // Seed the random number generator
    generateNewPosition();
}

// Generate a new random position for the food
void Food::generateNewPosition() {
    x = std::rand() % gridWidth;
    y = std::rand() % gridHeight;
}

// Getter for x-coordinate
int Food::getX() const {
    return x;
}

// Getter for y-coordinate
int Food::getY() const {
    return y;
}