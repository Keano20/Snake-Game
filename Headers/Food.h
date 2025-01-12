#ifndef SNAKE_GAME_FOOD_H
#define SNAKE_GAME_FOOD_H


#include <cstdlib> // For rand()
#include <ctime>   // For seeding random number generator

class Food {
private:
    int x;
    int y;
    int gridWidth;
    int gridHeight;

public:
    Food(int gridWidth, int gridHeight) : gridWidth(gridWidth), gridHeight(gridHeight) {
        std::srand(std::time(0));
        generateNewPosition();
    }

    void generateNewPosition() {
        x = std::rand() % gridWidth;
        y = std::rand() % gridHeight;
    }

    int getX() const { return x; }
    int getY() const { return y; }
};

#endif //SNAKE_GAME_FOOD_H
