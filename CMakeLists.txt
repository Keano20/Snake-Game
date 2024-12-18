cmake_minimum_required(VERSION 3.29)
project(Snake_Game)

set(CMAKE_CXX_STANDARD 23)

add_executable(Snake_Game main.cpp
        Snake.h
        Game.h
        Food.h
        Snake.cpp
        Game.cpp
        Food.cpp)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(/opt/homebrew/Cellar/sfml/2.6.2/include/SFML)
target_link_libraries(Snake_Game sfml-system sfml-window sfml-graphics sfml-audio)