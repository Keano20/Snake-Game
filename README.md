# 🐍 Snake Game

A classic Snake game implemented in C++ using the SFML library for graphics and input handling.

## 📚 Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Dependencies](#dependencies)

## 👋 Introduction

This project is a simple Snake game where players control a snake to eat food, growing longer with each piece consumed. The game ends when the snake collides with itself or the walls. SFML is used to handle graphics and input, providing a smooth and enjoyable gameplay experience.

##  Features

- Classic Snake gameplay.
- Simple and intuitive controls.
- Real-time graphics using SFML.

## 🔧 Installation

1. Clone this repository:
   ```bash
   https://github.com/Keano20/Snake-Game.git
   ```

2. Install the SFML library:
   - Follow the [official SFML installation guide](https://www.sfml-dev.org/tutorials/2.5/start-linux.php) for your platform.

3. Compile the game:
   ```bash
   g++ -o Snake-Game main.cpp -lsfml-graphics -lsfml-window -lsfml-system
   ```

## Usage

Run the compiled executable:
```bash
./Snake-Game
```

Use the arrow keys to control the snake and avoid collisions.

## 📌 Dependencies

- [SFML 2.5+](https://www.sfml-dev.org/)
