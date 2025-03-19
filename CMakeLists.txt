cmake_minimum_required(VERSION 3.29)
project(Snake_Game)

set(CMAKE_CXX_STANDARD 23)

add_executable(Snake_Game main.cpp
        include/Snake.h
        include/Game.h
        include/Food.h
        src/Snake.cpp
        src/Game.cpp
        src/Food.cpp)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(/opt/homebrew/Cellar/sfml/2.6.2/include/SFML)
target_link_libraries(Snake_Game sfml-system sfml-window sfml-graphics sfml-audio)