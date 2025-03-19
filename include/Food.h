#ifndef FOOD_H
#define FOOD_H

class Food {
private:
    int x;              // X-coordinate of the food
    int y;              // Y-coordinate of the food
    int gridWidth;      // Width of the grid (number of blocks)
    int gridHeight;     // Height of the grid (number of blocks)

public:
    Food(int gridWidth, int gridHeight); // Constructor
    void respawn();                     // Generate new random position
    int getX() const;                   // Get the X position
    int getY() const;                   // Get the Y position
};

#endif // FOOD_H