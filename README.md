# 🐍 Hungry Snake

A classic Snake game implemented in C++ using the SFML library for graphics and input handling.

## 📚 Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Dependencies](#dependencies)

## 👋 Introduction

This project is a simple Snake game where players control a snake to eat food, growing longer with each piece consumed. SFML is used to handle graphics and input, providing a smooth and enjoyable gameplay experience.

##  Features

- Classic Snake gameplay.
- Simple and intuitive controls.
- Real-time graphics using SFML.
- Dynamic food generation

# Setup Instructions 

 Clone this repository:
   ```bash
   https://github.com/Keano20/Snake-Game.git
   ```

### To set up **SFML** for this project, follow the instructions for either Windows or MacOS below.

## SFML Windows Setup

1.	**Download SFML**:
Download the SFML SDK for Windows from the official SFML website: https://www.sfml-dev.org/download.php.

2.	**Set up CMake**:
Extract the SFML files to a directory of your choice. Then, tell CMake where the SFML installation is located by specifying the SFML_DIR:
```bash
cmake -DSFML_DIR="C:/path/to/sfml/lib/cmake/SFML" ..
```
**Replace "C:/path/to/sfml" with the actual path to where SFML is installed.**

3.	**Build the project**: After configuring CMake, create a build directory, run CMake to generate the necessary files, and compile the project:
```bash
mkdir build
cd build
cmake ..
cmake --build .
```

## SFML macOS Setup

1. **Install SFML via Homebrew**:
   If you don’t have Homebrew installed, you can get it from [https://brew.sh](https://brew.sh).
   
   To install SFML, run:
   ```bash
   brew install sfml
   ```
2. **Link SFML with CMake**:

   You need to tell CMake where SFML is located. When running CMake, use the following command to set the SFML_DIR environment variable:
   ```bash
   cmake -DCMAKE_CXX_STANDARD=17 -DSFML_DIR=$(brew --prefix sfml)/lib/cmake/SFML ..
   ```
3. After SFML is installed and linked, you can build the project by running:
   ```bash
   mkdir build
   cd build
   cmake ..
   make

## Usage

Run the compiled executable:
```bash
./Snake-Game
```

Use the arrow keys to control the snake and avoid collisions.

## 📌 Dependencies

- [SFML 2.5+](https://www.sfml-dev.org/)
